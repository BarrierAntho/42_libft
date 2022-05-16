/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 08:45:30 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/16 11:25:07 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include "ft_memory.h"
# include "ft_message.h"

typedef struct s_list
{
	void		*content;
	struct s_list	*prev;
	struct s_list	*next;
}			t_list;

t_list  *ft_lst_append(t_list **lst, void *content);
void    ft_lst_clear(t_list **lst);
t_list  *ft_lst_delbyobj(t_list *obj);
t_list  *ft_lst_last(t_list *lst);
t_list  *ft_lst_new(void *content);
size_t	ft_lst_size(t_list **lst);


#endif
