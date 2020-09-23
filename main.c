/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:16:13 by jeldora           #+#    #+#             */
/*   Updated: 2020/09/23 01:12:19 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t		ft_strlen(char *str);
//size_t		ft_strcmp(char *s1, char *s2);
//char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	//char *str1 = malloc(6);
	//char *str2 = "01234";
	//strcpy(str1, str2);
	//ft_strcpy(str1, str2);
	printf("%ld\n", ft_strlen("heelo"));
	return (0);
}