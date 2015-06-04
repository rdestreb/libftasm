	global _ft_memset

section .text
	call _ft_memset
	ret

_ft_memset:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	push rdi
	mov rax, rsi
	cld
	mov rcx, rdx
	rep stosb
	pop rax
	leave
	ret
