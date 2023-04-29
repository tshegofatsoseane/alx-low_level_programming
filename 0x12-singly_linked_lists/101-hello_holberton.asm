section .data
    message db "Hello, Holberton", 0
    newline db 10, 0

	global   main
	  extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	add rsp, 8
	xor eax, eax
	  call  printf
	  mov   eax, 0
	  ret
format: db `Hello, Holberton\n`,0

