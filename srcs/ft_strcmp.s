		global _ft_strcmp
section .text

_ft_strcmp:
		mov rdx, -1

start:
		inc rdx
		cmp byte[rdi + rdx], 0
		je doubletest
		cmp byte[rsi + rdx], 0
		je end_compare
		jmp compare

doubletest:
		cmp byte[rsi + rdx], 0
		jne end_compare
		cmp rax, 0
		jne min
		ret

min:
		dec rdx

end_compare:
		movzx rax , byte[rdi + rdx]
		movzx rcx , byte[rsi + rdx]
		sub	  rax, rcx
		cmp   rax, 0
		ret

compare:
		movzx rax , byte[rdi + rdx]
		movzx rcx , byte[rsi + rdx]
		sub	  rax, rcx
		cmp rax, 0
		je start
		ret
