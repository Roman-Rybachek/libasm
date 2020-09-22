global _ft_strlen

section .text

_ft_strlen:
			xor rax, rax
again:		
			cmp byte [rdi + rax], 0
			je finish
			inc rax
			jmp again
finish:
			ret
		