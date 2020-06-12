            global            _ft_strcpy
            section            .text

_ft_strcpy:
            mov                rax, -1 
            cmp                rsi, 0
            je                 return
            xor                rdx, 0

loop:
            inc               rax
            cmp               byte [rsi + rax], 0
            je                return
			mov				  bl, byte [rsi + rax]
            mov               byte [rdi + rax], bl
            jmp               loop
return:
            mov              byte [rdi + rax], 0
            mov              rax,rdi
            ret
