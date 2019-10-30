/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:57:00 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:57:14 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

void	execute(char *buffer, t_point *point, t_param *param, t_case **map)
{
	map = create_map(buffer, param);
	free(buffer);
	find_square(map, param, point);
	display_final(map, point, param);
	free_map(map, param);
}

int		check_buffer(char *buffer)
{
	if (buffer[0])
		return (1);
	ft_putstr_error("map error\n");
	return (0);
}

void	standard(t_point *point, t_case **map)
{
	char		*buffer;
	t_param		*param;

	buffer = standard_entry();
	if (!(check_buffer(buffer)))
		return ;
	if (!(point = malloc(sizeof(t_point) * 1)))
	{
		ft_putstr_error("Error\n");
		exit(0);
	}
	point->value = 0;
	if (!(param = set_param(buffer)))
		ft_putstr_error("map error\n");
	else
	{
		if (!(check_map(param, buffer)))
			;
		else
			execute(buffer, point, param, map);
	}
	free(param);
	free(point);
	exit(0);
}

void	delegate(char *file_name, t_point *point, t_case **map)
{
	char		*buffer;
	t_param		*param;

	if (!(buffer = open_file(file_name)))
		;
	else
	{
		if (!(param = set_param(buffer)))
			ft_putstr_error("map error\n");
		else
		{
			if (!(check_map(param, buffer)))
			{
				free(buffer);
				return ;
			}
			else
				execute(buffer, point, param, map);
		}
		free(param);
	}
}

void	file_name(char **av, t_point *point, t_case **map)
{
	int			i;

	i = 0;
	while (av[++i])
	{
		delegate(av[i], point, map);
		if (av[i + 1])
			write(1, "\n", 1);
	}
}
