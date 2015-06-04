	global _ft_strlen

section .data
	cpt db 0

section .text
	call _ft_strlen
	ret

_ft_strlen:
	push rbp
	mov rbp, rsp
	sub rsp, 10
	mov byte [rel cpt], 0 		;initialisation compteur
	jmp boucle

boucle:
	cmp byte [rdi], 0 			;condition entree de boucle
	je stop						;si en fin de chaine -> stop
	inc rdi
	inc byte [rel cpt]						;cpt++
	jmp boucle

stop:
	mov rax, [rel cpt]
	leave
	ret
