	global _ft_strdup
	extern _ft_strlen
	extern _ft_memcpy
	extern _malloc

section .text
	call _ft_strdup
	ret

_ft_strdup:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	push rdi					;sauvegarde *src
	call _ft_strlen				;taille de src
	mov rsi, rax
	inc rsi						;+1 pour malloc
	push rsi					;sauvegarde
	mov rdi, rsi
	call _malloc
	mov rdi, rax				;dest
	pop rsi
	pop rdi						;recupere *src
	mov rdx, rsi				;taille
	mov rsi, rdi
	call _ft_memcpy
	leave
	ret
