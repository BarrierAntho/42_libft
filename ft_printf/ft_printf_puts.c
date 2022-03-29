/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:31:31 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 17:44:10 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf_puts(int fd, va_list va)
{
	char	*ap;

	ap = (char *)va_arg(va, char *);
	return (ft_putstr_fd(fd, ap));
}
