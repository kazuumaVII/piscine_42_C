/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:55:33 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:55:44 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

void	ft_putstr_error(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(2, str, i);
}

int		check_character(t_param *param, char *buffer)
{
	int i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i])
	{
		if (!buffer[i])
		{
			ft_putstr_error("map error\n");
			return (0);
		}
		if (buffer[i] == '\n')
			;
		else if (buffer[i] != param->empty && buffer[i] != param->obstacle
			&& buffer[i] >= 32 && buffer[i] <= 126)
		{
			ft_putstr_error("map error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int		check_length(t_param *param, char *buffer)
{
	int i;
	int count;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i])
	{
		count = 0;
		while (buffer[i] != '\n')
		{
			count++;
			i++;
		}
		if (count != param->length)
		{
			ft_putstr_error("map error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int		check_size(t_param *param, char *buffer)
{
	int i;
	int count_line;

	i = 0;
	count_line = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			count_line++;
		i++;
	}
	if (count_line != param->size)
	{
		ft_putstr_error("map error\n");
		return (0);
	}
	return (1);
}

int		check_map(t_param *param, char *buffer)
{
	if (!(check_size(param, buffer)))
		return (0);
	if (!(check_length(param, buffer)))
		return (0);
	if (!(check_character(param, buffer)))
		return (0);
	if ((param->empty == param->obstacle) || (param->obstacle == param->fill) ||
		(param->fill == param->empty))
	{
		ft_putstr_error("map error\n");
		return (0);
	}
	return (1);
}
