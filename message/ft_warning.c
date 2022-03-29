/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_warning.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:59:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/29 19:00:21 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_message.h"
#include "../include/ft_printf.h"

int	ft_warning(int fd, char *f, char *s, char *data)
{
	int			res;

	res = ft_printf(fd, "%sWarning\nfunction: %s\ndata: %s\nmsg: %s%s\n",
			YE, f, data, s, NC);
	if (res <= 0)
		res = 1;
	return (res);
}
