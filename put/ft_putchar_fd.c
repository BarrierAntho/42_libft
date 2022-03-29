/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:25:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 17:39:09 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_put.h"

int	ft_putchar_fd(int fd, int c)
{
	if (!fd)
		return (0);
	return ((int)write(fd, &c, 1));
}
