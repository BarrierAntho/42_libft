/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:29:18 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/29 18:25:29 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_put.h"

int	ft_putstr_fd(int fd, char *s)
{
	int	res;

	res = 0;
	if (!fd)
		return (0);
	while (*s)
	{
		ft_putchar_fd(fd, *s);
		s++;
	}
	return (res);
}
