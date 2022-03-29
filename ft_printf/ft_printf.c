/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:25:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/29 18:57:17 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/ft_message.h"

int	ft_printf(int fd, const char *s, ...)
{
	int			res;
	va_list		va;

	if (fd < 0)
		return (ft_error(2, "ft_printf", ERR_FD, "fd"));
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
