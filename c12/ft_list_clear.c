/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:53:44 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:53:47 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void(*free_fct)(void *))
{
	t_list	*next;

	if (!(next = begin_list->next))
	{
		free_fct(begin_list->data);
		free(begin_list);
		return ;
	}
	free_fct(begin_list->data);
	free(begin_list);
	ft_list_clear(next, free_fct);
}
