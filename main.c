/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:16:13 by jeldora           #+#    #+#             */
/*   Updated: 2020/09/22 19:21:05 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t		ft_strlen(char *str);

int		main(void)
{
	printf("%d\n", ft_strlen(""));
	return (0);
}