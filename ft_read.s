global _ft_read

extern ___error

section .text

_ft_read:
			xor rax, rax
			xor rbx, rbx
			mov rax, 0x02000003
			syscall
			jc set_error
			ret

set_error:
			push rax
			call ___error
			pop rbx
			mov [rax], rbx
			mov rax, -1
			ret