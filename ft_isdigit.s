	global _ft_isdigit

section .text
	call _ft_isdigit
	ret

_ft_isdigit:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	cmp rdi, '0'
	jl nope
	cmp rdi, '9'
	jg nope
	mov rax, 1
	leave
	ret

nope:
	mov rax, 0
	leave
	ret
