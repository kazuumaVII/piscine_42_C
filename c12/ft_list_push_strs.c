/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:53:15 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:53:23 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*current;
	t_list	*temp;
	int		i;

	i = 1;
	temp = ft_create_elem(strs[0]);
	while (i < size)
	{
		current = ft_create_elem(strs[i]);
		current->next = temp;
		i++;
	}
	return (current);
}
