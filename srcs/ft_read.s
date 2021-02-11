		global ft_read
section .text

ft_read:
		mov rax, 1
		syscall
		jc error
		ret
error:
		mov rax, -1
		ret
