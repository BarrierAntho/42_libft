/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chartype.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:49:53 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 15:33:52 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHARTYPE_H
# define FT_CHARTYPE_H

/**
 * @brief Return int if the character is alpha-numeric [a-z;A-Z;0-9]
 *
 * @param int c: Character to be checked
 * @return int | 1: is true, 0: is false
 */
int	ft_isalnum(int c);

/**
 * @brief Return int if the character is alphabetic [a-z;A-Z]
 *
 * @param int c: Character to be checked
 * @return int | 1: is true, 0: is false
 */
int	ft_isalpha(int c);

/**
 * @brief Return int if the character is an ascii character
 * (includes DEL character)
 *
 * @param int c: Character to be checked
 * @return int | 1: is true, 0: is false
 */
int	ft_isascii(int c);

/**
 * @brief Return int if the character is numeric [0-9]
 *
 * @param int c: Character to be checked
 * @return int | 1: is true, 0: is false
 */
int	ft_isdigit(int c);

/**
 * @brief Return int if the character is printable
 *
 * @param int c: Character to be checked
 * @return int | ascii decimal: is true, 0: is false
 */
int	ft_isprint(int c);

#endif
