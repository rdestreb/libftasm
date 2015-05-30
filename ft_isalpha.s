%define MACSYSCALL(nb) 0x2000000 | nb
%define STDOUT 1

section .text
	global start
	global _isalpha

start:
	call _isalpha
	ret

_isalpha:
	push rbp
	mov rbp, rsp
/* code */
/*	mov rdi, c

	comparer entree c avec 'Z' 'z' 'a' 'A'
	jumps -> rax 1 si OK, rax 0 sinon ?

verif1:
	cmp rdi,'A'
	JAE verif2

verif2:
	cmp rdi, 'Z'
	JBE ok
ok:D
	mov rax, 1
	*/
	mov rax, MACSYSCALL(0)
	syscall
	leave
	ret