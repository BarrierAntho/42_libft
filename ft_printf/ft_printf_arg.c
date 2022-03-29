/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:15:17 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 17:57:14 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

//	else if (*s == 'p')
//		res += ft_printf_putp(fd, va);
//	else if (*s == 'd')
//		res += ft_printf_putd(fd, va);
//	else  if (*s == 'u')
//		res += ft_printf_putu(fd, va);
//	else if (*s == 'x')
//		res += ft_printf_putx(fd, va, "0123456789abcdef", "0x");
//	else if (*s == 'X')
//		res += ft_printf_putx(fd, va, "0123456789ABCDEF", "0X");
int	ft_printf_arg(int fd, const char *s, va_list va)
{
	int	res;

	res = 0;
	if (*s == 'c')
		res += ft_printf_putc(fd, va);
	else if (*s == 's')
		res += ft_printf_puts(fd, va);
	else if (*s == '%')
		res += ft_putchar_fd(fd, *s);
	else
		res += 0;
	return (res);
}
