/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:55:57 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:56:07 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

void		free_map(t_case **map, t_param *param)
{
	int i;

	i = 0;
	while (i < param->size - 1)
		free(map[i++]);
	free(map);
}

t_case		create_elem(char c, t_param *param)
{
	t_case		new_element;

	new_element.origin = c;
	if (c == param->empty)
		new_element.value = 1;
	else if (c == param->obstacle)
		new_element.value = 0;
	else if (c == 0)
		new_element.value = -1;
	return (new_element);
}

t_case		*create_line(char *line, t_param *param)
{
	t_case		*new_line;
	int			i;

	i = 0;
	if (!(new_line = malloc(sizeof(t_case) * (param->length + 1))))
		return (NULL);
	while (i < param->length && *line != '\n')
	{
		new_line[i] = create_elem(line[i], param);
		i++;
	}
	new_line[i] = create_elem(0, param);
	return (new_line);
}

t_case		**create_map(char *buffer, t_param *param)
{
	t_case		**map;
	int			i;
	char		*temp;

	temp = buffer;
	i = 0;
	while (*temp != '\n')
		temp++;
	temp++;
	if (!(map = malloc(sizeof(t_case *) * (param->size + 1))))
		return (0);
	while (i < param->size && *temp)
	{
		map[i] = create_line(temp, param);
		i++;
		while (*temp != '\n')
			temp++;
		temp++;
	}
	return (map);
}
