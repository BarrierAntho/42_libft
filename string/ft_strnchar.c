/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:15:09 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:15:10 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_string.h"

int	ft_strnchar(const char *s, int c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			res++;
		i++;
	}
	return (res);
}
