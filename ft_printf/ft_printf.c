/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:25:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/30 11:35:40 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/ft_message.h"

int	ft_printf(int fd, const char *s, ...)
{
	int			res;
	va_list		va;

	if (fd < 0)
		return (ft_error("ft_printf", "fd", 0, ERR_FD));
	res = 0;
	va_start(va, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			res += ft_printf_arg(fd, s, va);
		}
		else
			res += ft_putchar_fd(fd, *s);
		s++;
	}
	va_end(va);
	return (res);
}
