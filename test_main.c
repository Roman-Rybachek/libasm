/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:16:13 by jeldora           #+#    #+#             */
/*   Updated: 2020/09/23 20:41:18 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_write(int fd, char *str, int len);
int		ft_read(int fd, void *buf, size_t nbyte);
size_t	ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dist, char *src);
int		ft_strcmp(char *str1, char *str2);


void	test_ft_strlen()
{
	printf("\n>>>>>>TEST ft_strlen()<<<<<<\n");
	char *str = "hello_world1kjgkjgsdfkjgslkdjgflkajgsdflkjaghsdflkjhasdlfjhalskdjhflkjasdhflkjahsdflkjhasdlkfjhalskdjhflkjashdflkjhasdlkfjhalksdjhflkajsdhflkjhasdflkjh";
	printf("%s: %zu\n", str, ft_strlen(str));
	str = "";
	printf("empty string: %zu\n", ft_strlen(str));
	str = "h";
	printf("%s: %zu\n", str, ft_strlen(str));
}

void	test_ft_strcpy()
{
	printf("\n>>>>>>TEST ft_strcpy()<<<<<<\n");
	char dest[50];
	char *src = "555";
	printf("dest_len = 10, str = %s, dest = %s\n", src, strcpy(dest, src));
	/*dest = malloc(0);
	src = "123456789";
	printf("dest_len = 0, str = %s, dest = %s\n", src, ft_strcpy("", src));
	dest = malloc(5);
	src = "";
	printf("dest_len = 5, str = %s, dest = %s\n", src, ft_strcpy("", ""));*/
}

void	test_ft_strcmp()
{
	printf("\n>>>>>>TEST ft_strcmp()<<<<<<\n");
	char *str1 = "1";
	char *str2 = "0";
	printf("str1 = %s, str2 = %s, result = %d\n", str1, str2, ft_strcmp(str1, str2));
	str1 = "0";
	str2 = "1";
	printf("str1 = %s, str2 = emtpy_string, result = %d\n", str1, ft_strcmp(str1, str2));
	str1 = "1";
	str2 = "";
	printf("str1 = %s, str2 = %s, result = %d\n", str1, str2, ft_strcmp(str1, str2));
	str1 = "11111111";
	str2 = "1111";
	printf("str1 = %s, str2 = %s, result = %d\n", str1, str2, ft_strcmp(str1, str2));
	str1 = "111";
	str2 = "111111";
	printf("str1 = %s, str2 = %s, result = %d\n", str1, str2, ft_strcmp(str1, str2));
	str1 = "";
	str2 = "";
	printf("str1 = empty_string, str2 = empty_string, result = %d\n", ft_strcmp(str1, str2));
}

void	test_ft_strdup()
{
	printf("\n>>>>>>TEST ft_strdup()<<<<<<\n");
	char *old;
	old = "hello worldkjhdsfg;lkhasdfglkjdfgadfkjghalskjdhglkajsdhflkjhasdlkfjhalksdjfhglkajhsdflkjhasdlkfjhalksjdhflkjashdflkjhasdlfkjhasdlkjfhalksjdhflkajsdhf";
	printf("Old str: %s; New str: %s\n", old, ft_strdup(old));
	old = "";
	printf("Old str: %s; New str: %s\n", old, ft_strdup(old));
	old = "h";
	printf("Old str: %s; New str: %s\n", old, ft_strdup(old));
}	

void	test_ft_read_and_ft_write()
{
	printf("\n>>>>>>TEST ft_write() and ft_read()<<<<<<\n");
	char	buf1[13];
	char	buf2[13];
	int fd = open("new_file", O_CREAT | O_WRONLY, S_IRWXU | S_IROTH);
	ft_write(fd, "hello world\n", 12);
	write(fd, "hello world\n", 12);
	close(fd);

	fd = open("new_file", O_RDONLY);
	ft_read(fd, buf1, 12);
	buf1[12] = '\0';
	printf("ft_read 12 byte: %s", buf1);
	read(fd, buf2, 12);
	buf2[12] = '\0';
	printf("read 12 byte: %s", buf2);
	close(fd);
}

int		main(void)
{
	int choice;

	choice = 0;
	test_ft_strlen();
	test_ft_strcpy();
	test_ft_strcmp();
	test_ft_strdup();
	test_ft_read_and_ft_write();
	return (0);
}