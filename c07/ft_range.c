/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:23:58 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:24:05 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *result;
	int i;
	int j;

	j = min;
	i = 0;
	if (min >= max)
		return (NULL);
	if (!(result = malloc(sizeof(int) * (max - min))))
		return (0);
	while (j < max)
		result[i++] = j++;
	return (result);
}
