/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:41:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/29 19:00:34 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MESSAGE_H
# define FT_MESSAGE_H

# include "ft_color.h"

/***GLOBAL***/
# define ERR_ARG "Wrong argument definition"
# define ERR_FILEOPEN "File is missing or not readable"

/***FILE DESCRIPTOR***/
# define ERR_FD "File descriptor not defined"

int	ft_error(int fd, char *f, char *s, char *data);
int	ft_warning(int fd, char *f, char *s, char *data);

#endif
