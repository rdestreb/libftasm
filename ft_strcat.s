	global _ft_strcat
	extern _ft_strlen
	extern _ft_memcpy

section .text
	call _ft_strcat
	ret

_ft_strcat:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	push rdi					;pointeurs de chaque str sur la stack
	push rsi
 	jmp boucle

boucle:							;atteindre fin de dest
 	cmp byte [rdi], 0
 	je stop
 	inc rdi
 	jmp boucle

stop:
	push rdi 					;pointeur vers fin dest sur la stack
	mov rdi, rsi				;placer src dans rdi pour strlen
	call _ft_strlen
	mov rdx, rax
	;; sur la stack: *debut dest -> *debut src -> *fin dest
	pop rdi						;recupere de la stack le pointeur de fin dest dans rdi
	pop rsi						;recupere de la stack le pointeur de debut de src
	call _ft_memcpy
	pop rax						;recupere de la stack le pointeur de debut de dest
	leave
	ret
