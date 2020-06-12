		global _ft_write
section .text

_ft_write:
		mov rax, 0x02000004
		syscall
		mov rax, rdi
		jc error
		ret
error:
		mov rax, -1
		ret
