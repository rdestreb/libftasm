	global _ft_strlen

section .text
	call _ft_strlen
	ret

_ft_strlen:
	mov al, 0			;set le registre a 0
	mov rcx, 0			;set le cpt a 0
	not rcx				;inverse les bits : rcx est a sa valeur max
	cld					;parcoure les bits de gauche a droite
	repne scasb			;compare rdi et al tant que non egal et decremente rcx
	not rcx				; inverse rcx pour avoir la taille
	dec rcx				;- /0
	mov rax, rcx
	ret
