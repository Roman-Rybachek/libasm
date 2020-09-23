global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc

section .text

_ft_strdup:
			xor rax, rax
			cmp rdi, 0
			je return_null
			push rdi
			call _ft_strlen
			mov rdi, rax
			call _malloc
			pop rsi
			mov rdi, rax
			call _ft_strcpy
			ret

return_null:
			ret