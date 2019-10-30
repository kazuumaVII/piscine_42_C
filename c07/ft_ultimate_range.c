/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:24:21 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:24:45 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	j = min;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(*range = malloc(sizeof(int) * (max - min) + 1)))
		return (-1);
	while (j < max)
		(*range)[i++] = j++;
	return (i);
}
