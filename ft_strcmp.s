global _ft_strcmp

section .text

_ft_strcmp:
			xor rax, rax
			xor rcx, rcx
			xor rdx, rdx
again:
			mov dl, byte [rdi + rcx]
			cmp dl, 0
			je finish
			cmp byte [rsi + rcx], 0
			je finish
			cmp dl, byte [rsi + rcx]
			jne finish
			inc rcx
			jmp again
finish:
			xor rdx, rdx
			mov al, byte [rdi + rcx]
			mov dl, byte [rsi + rcx]
			sub rax, rdx
			ret
