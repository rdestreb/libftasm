%define MACSYSCALL(nb) 0x2000000 | nb
%define READ 3
%define WRITE 4

	global _ft_cat
	extern _ft_puts

section .rodata
	buffer times 128 db 0
	.size equ $ - buffer

section .text
	call _ft_cat
	ret

_ft_cat:
	push rdi					;fd
	lea rsi, [rel buffer]
	mov rdx, buffer.size		;buffer size
	mov rax, MACSYSCALL(READ)
	syscall
	cmp rax, 0
	jle stop
	mov rdi, 1					;STDOUT pour write
	mov rdx, rax				;ecrit contenu du buffer
	mov rax, MACSYSCALL(WRITE)
	syscall
	pop rdi
	jmp _ft_cat

stop:
	pop rdi
	leave
	ret
