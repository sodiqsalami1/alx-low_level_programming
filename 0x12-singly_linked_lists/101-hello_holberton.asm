global main
	extern prinf
main:
	mov edi, format
	xor eax, eax
	call printf
	mov	eax, 0
	ret
format: db 'Hello, holberton', 0
