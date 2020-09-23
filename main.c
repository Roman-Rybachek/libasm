/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:16:13 by jeldora           #+#    #+#             */
/*   Updated: 2020/09/23 16:24:40 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

//int		ft_write(int fd, char *str, int len);
int		ft_read(int fd, void *buf, size_t nbyte);
int		main(void)
{
	//int fd = open("file1", O_CREAT | O_TRUNC | O_WRONLY, S_IRWXU | S_IROTH);
	int fd = open("file1", O_RDONLY);
	char buf[5];
	read(fd, buf, 5);
	printf("%s", buf);

	return (0);
}