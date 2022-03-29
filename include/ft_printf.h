/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:27:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 17:56:06 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "ft_put.h"

/**
 * @brief Return int of total printed characters linked to string definition
 * and variable argument
 *
 * @param int fd: File descriptor | const char *s: String to be printed |
 * ...: variable argument
 * %c: character
 * %s: string
 * %p: pointer
 * %d: decimal
 * %u: unsigned int
 * %x: hexadecimal with prefix "0x"
 * %X: hexadecimal with prefix "0X"
 * %%: percentage character
 * @return int | >= 0: total of printed characters
 */
int	ft_printf(int fd, const char *s, ...);

/**
 * @brief Return int if the character is printable
 *
 * @param int c: Character to be checked
 * @return int | ascii decimal: is true, 0: is false
 */
int	ft_printf_arg(int fd, const char *s, va_list va);

/**
 * @brief Return int if the character is printable
 *
 * @param int c: Character to be checked
 * @return int | ascii decimal: is true, 0: is false
 */
int	ft_printf_putc(int fd, va_list va);

/**
 * @brief Return int if the character is printable
 *
 * @param int c: Character to be checked
 * @return int | ascii decimal: is true, 0: is false
 */
int	ft_printf_puts(int fd, va_list va);

#endif
