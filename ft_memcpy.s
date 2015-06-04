	global _ft_memcpy

section .text
	call _ft_memcpy
	ret

_ft_memcpy:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	push rdi
	cld
	mov rcx, rdx
	rep movsb
	pop rax
	leave
	ret
