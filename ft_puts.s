%define MACSYSCALL(nb) 0x2000000 | nb
%define WRITE 4

	global _ft_puts
	extern _ft_strlen

section .rodata
	zero db "(null)",10

section .text
	call _ft_puts
	ret

_ft_puts:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	cmp rdi, 0
	je putnull
	push rdi
	call _ft_strlen				;recupere taille de str
	pop rdi
	mov rdx, rax
	lea rsi, [rel rdi]
	mov rdi, 1					;STDOUT
	mov rax, MACSYSCALL(WRITE)
	syscall
	jmp back

back:
	lea rsi, [rel zero + 6] 	;hack degueulasse pour \n
	mov rdx, 1
	mov rax, MACSYSCALL(WRITE)
	syscall
	mov rax, 10
	leave
	ret

putnull:
	lea rsi, [rel zero]
	mov rdx, 7
	mov rax, MACSYSCALL(WRITE)
	syscall
	leave
	ret
