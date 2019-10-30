/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:56:36 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:56:48 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

char	*convert_map(t_case **map, t_param *param)
{
	char	*tab;
	int		i;
	int		k;
	int		j;

	i = 0;
	k = 0;
	if (!(tab = malloc(sizeof(char) * (param->weight + param->size))))
		return (NULL);
	while (i < param->weight + param->size)
	{
		j = 0;
		while (j < param->length)
		{
			tab[i] = map[k][j].origin;
			i++;
			j++;
		}
		tab[i] = '\n';
		i++;
		k++;
	}
	return (tab);
}

void	display_map(t_case **map, t_param *param)
{
	char *tab;

	tab = convert_map(map, param);
	write(1, tab, (param->weight + param->size));
	free(tab);
}

void	display_final(t_case **map, t_point *point, t_param *param)
{
	int		countx;
	int		county;
	int		x;
	int		y;

	countx = point->value;
	x = point->x;
	while (countx > 0)
	{
		county = point->value;
		y = point->y;
		while (county > 0)
		{
			map[x][y].origin = param->fill;
			y--;
			county--;
		}
		x--;
		countx--;
	}
	display_map(map, param);
}

int		check_area(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	find_square(t_case **map, t_param *param, t_point *point)
{
	int		x;
	int		y;

	x = 0;
	point->value = 0;
	while (x < param->size)
	{
		y = 0;
		while (y < param->length)
		{
			if (map[x][y].value == 0)
				y++;
			else if (x != 0 && y != 0)
				map[x][y].value += check_area(map[x - 1][y].value,
					map[x][y - 1].value, map[x - 1][y - 1].value);
			if (map[x][y].value > point->value)
			{
				point->value = map[x][y].value;
				point->x = x;
				point->y = y;
			}
			y++;
		}
		x++;
	}
}
