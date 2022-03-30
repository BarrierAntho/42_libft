/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:45:12 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/30 11:40:11 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_message.h"
#include "../include/ft_printf.h"

int	ft_error(char *f, char *data, char c, char *msg)
{
	int			res;

	res = ft_printf(2, "%sError\n\
			function: %s\n\
			data str: %s\n\
			data c: %c\n\
			msg: %s%s\n",
			RD, f, data, c, msg, NC);
	if (res <= 0)
		res = 1;
	return (res);
}
