	global _ft_tolower

section .text
	call _ft_tolower
	ret

_ft_tolower:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	cmp rdi, 'A'
	jl nope
	cmp rdi, 'Z'
	jg nope
	add rdi, 32
	mov rax, rdi
	leave
	ret

nope:
	mov rax, rdi
	leave
	ret
