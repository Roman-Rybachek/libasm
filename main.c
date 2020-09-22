/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:16:13 by jeldora           #+#    #+#             */
/*   Updated: 2020/09/22 21:20:20 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t		ft_strlen(char *str);
size_t		ft_strcmp(char *s1, char *s2);

int		main(void)
{

	printf("%d\n", ft_strcmp("01", "0"));
	return (0);
}