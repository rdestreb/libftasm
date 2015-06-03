%define MACSYSCALL(nb) 0x2000000 | nb
%define STDOUT 1


	global _ft_isalpha

section .text
	call _ft_isalpha
	ret

_ft_isalpha:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	cmp rdi, 'A'
	jl nope
	cmp rdi, 'z'
	jg nope
	cmp rdi, 'Z'
	jle ok
	cmp rdi, 'a'
	jge ok
	jmp nope

ok:
	mov rax, 1
	leave
	ret

nope:
	mov rax, 0
	leave
	ret