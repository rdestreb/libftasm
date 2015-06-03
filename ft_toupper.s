	global _ft_toupper

section .text
	call _ft_toupper
	ret

_ft_toupper:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	cmp rdi, 'a'
	jl nope
	cmp rdi, 'z'
	jg nope
	sub rdi, 32
	mov rax, rdi
	leave
	ret

nope:
	mov rax, rdi
	leave
	ret