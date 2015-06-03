	global _ft_isalnum

section .text
	call _ft_isalnum
	extern _ft_isalpha
	extern _ft_isdigit
	ret

_ft_isalnum:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	call _ft_isalpha
	cmp rax, 1
	je ok
	call _ft_isdigit
	cmp rax, 1
	je ok
	mov rax, 0
	leave
	ret

ok:
	mov rax, 1
	leave
	ret

