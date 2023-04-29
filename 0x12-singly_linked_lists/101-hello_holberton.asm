section .data
	message db 'Hello, Holberton', 0Ah, 0
	format db '%s'
section .text
	global main

	extern printf

main:
	mov rdi, format
	mov rsi, message
	xor rax, rax
	call printf
	xor eax, eax
	ret
