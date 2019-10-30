/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:46:02 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:46:10 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *results;
	int i;

	i = 0;
	if (!(results = malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		results[i] = (*f)(tab[i]);
		i++;
	}
	return (results);
}
