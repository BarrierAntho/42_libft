/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:28:09 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 17:49:41 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H

# include <unistd.h>

/**
 * @brief Return int of total printed characters
 *
 * @param int fd: File descriptor | int c: Character to be printed
 * @return int | -1: error, >= 0: total of printed characters
 */
int	ft_putchar_fd(int fd, int c);

/**
 * @brief Return int of total printed characters
 *
 * @param int fd: File descriptor | char s*: Srting to be printed
 * @return int | -1: error, >= 0: total of printed characters
 */
int	ft_putstr_fd(int fd, char *s);

#endif
