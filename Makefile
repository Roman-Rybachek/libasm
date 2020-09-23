# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/23 16:54:16 by jeldora           #+#    #+#              #
#    Updated: 2020/09/23 20:19:10 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

TEST_MAIN = test_main

SRC = ft_strlen.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_read.s ft_write.s

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ) $(TEST_MAIN).c
	ar rc $(NAME) $(OBJ)
	gcc $(TEST_MAIN).c -L. -lasm -o $(TEST_MAIN)

%.o: %.s
	nasm $< -f macho64

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libasm.a test_main new_file

re: fclean all

bonus:
