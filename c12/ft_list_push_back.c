/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:52:52 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:53:00 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_element;
	t_list	*current;

	current = *begin_list;
	new_element = ft_create_elem(data);
	while (current->next)
		current = current->next;
	current->next = new_element;
}
