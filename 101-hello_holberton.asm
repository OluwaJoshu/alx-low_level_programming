section .data
	msg db 'Hello, Holberton',10
	len equ $ - msg

section .text
	global main

main:
	MOV rdi, 1 ; stdin fd
	MOV rsi, msg
	MOV rdx, len
	MOV rax, 1 ; write syscall
	syscall
