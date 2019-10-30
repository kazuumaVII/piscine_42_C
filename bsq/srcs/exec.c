/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:56:17 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:56:24 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

int		main(int ac, char **av)
{
	t_point		*point;
	t_case		**map;

	map = NULL;
	if (!(point = malloc(sizeof(t_point) * 1)))
	{
		ft_putstr_error("Error\n");
		return (0);
	}
	point->value = 0;
	if (ac == 1)
	{
		standard(point, map);
		return (0);
	}
	else
		file_name(av, point, map);
	free(point);
	return (0);
}
