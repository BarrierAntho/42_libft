/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:21:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/16 16:40:07 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	string_strncmp(int(*f)(const char *, const char *, size_t),
		char **s1, char **s2, int *input)
{
	int	i;
	int	j;
	int	k;
	int	res;

	i = 0;
	j = 0;
	k = 0;
	res = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			k = 0;
			while (input[k])
			{
				res = 0;
				printf("s1: %s\ts2: %s\tinput: %d\n", s1[i], s2[j], input[k]);
				res = (*f)((const char *)s1[i], (const char *)s2[j],
						(size_t)input[k]);
				printf("res: %d\n", res);
				k++;
				printf("%s\n", SEP_S);
			}
			j++;
			printf("%s\n", SEP_P);
		}
		i++;
	}
}
