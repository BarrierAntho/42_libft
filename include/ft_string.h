/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:05:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 16:06:18 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <unistd.h>

/**
 * @brief Return a pointer to the first occurrence of the character c in the
 * string s.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return char* | 0: is not existing, >= 0: pointer in the string
 */
char	*strchr(const char *s, int c);

/**
 * @brief Return a pointer to the last occurrence of the character c in the
 * string s.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return char* | 0: is not existing, >= 0: pointer in the string
 */
char	*strrchr(const char *s, int c);

/**
 * @brief Return the index to the first occurrence of the character c in the
 * string s.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return int | -1: is not existing, >= 0: index in the string
 */
int		ft_index(const char *s, int c);

/**
 * @brief Return the index to the last occurrence of the character c in the
 * string s.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return int | -1: is not existing, >= 0: index in the string
 */
int		ft_rindex(const char *s, int c);

/**
 * @brief Return the length of the string s.
 *
 * @param const char *s: String to be read
 * @return size_t 
 */
size_t	ft_strlen(const char *s);

#endif
