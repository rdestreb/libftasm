	global _ft_isprint

section .text
	call _ft_isprint
	ret

_ft_isprint:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	cmp rdi, '~'
	jg nope
	cmp rdi, ' '
	jl nope
	mov rax, 1
	leave
	ret

nope:
	mov rax, 0
	leave
	ret