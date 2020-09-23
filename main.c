/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:16:13 by jeldora           #+#    #+#             */
/*   Updated: 2020/09/23 12:29:59 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//size_t		ft_strlen(char *str);
//size_t		ft_strcmp(char *s1, char *s2);
//char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *str);

int		main(void)
{
	char *str;
	//strcpy(str1, str2);
	//char *res1 = ft_strcpy(str1, str2);
	str = ft_strdup(NULL);
	//char *str2 = strdup(NULL);
	printf("%s\n", str);
	return (0);
}