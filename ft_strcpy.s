global _ft_strcpy

section .text

_ft_strcpy:
			xor rax, rax
			xor rdx, rdx
			xor rcx, rcx
again:
			cmp byte[rsi + rdx], 0
			je finish
			mov cl, byte[rsi + rdx]
			mov byte[rdi + rdx], cl
			inc rdx
			jmp again

finish:
			mov rax, rdi
			mov byte[rax + rdx], 0
			ret