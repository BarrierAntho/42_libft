/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:45:12 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/29 18:46:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_message.h"
#include "../include/ft_printf.h"

int	ft_error(int fd, char *f, char *s, char *data)
{
	int			res;

	res = ft_printf(fd, "%sError\nfunction: %s\ndata: %s\nmsg: %s%s\n",
			RD, f, data, s, NC);
	if (res <= 0)
		res = 1;
	return (res);
}
