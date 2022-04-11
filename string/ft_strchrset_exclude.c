/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrset_exclude.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:14:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:14:30 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_string.h"

char	*ft_strchrset_exclude(const char *s, const char *chrset)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(chrset, s[i]) == NULL)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
