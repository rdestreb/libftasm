	global _ft_bzero
	extern _ft_memset

section .text
	call _ft_bzero
	ret

_ft_bzero:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	mov rdx, rsi
	mov rsi, 0
	call _ft_memset
	leave
	ret
