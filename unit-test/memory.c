/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:36:25 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/16 11:03:58 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	memory_cmp(int(*f)(const void *, const void *, size_t), const void *input1,
			const void *input2, size_t n)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	printf("input1: %s\tinput2: %s\n", (char *)input1, (char *)input2);
	res = (*f)(input1, input2, n);
	printf("res: %d\n", res);
	i++;
	printf("%s\n", SEP_S);
}
