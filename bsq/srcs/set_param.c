/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_param.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:57:47 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:57:56 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

int			ft_strlen_n(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	return (i);
}

int			check_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	if (str[i + 1])
		return (1);
	return (0);
}

void		set_param_attribute(t_param *param, char a, char b, char c)
{
	param->fill = a;
	param->obstacle = b;
	param->empty = c;
}

t_param		*set_param(char *buffer)
{
	t_param		*param;
	int			i;
	int			j;
	int			total;

	i = 0;
	j = 0;
	total = 0;
	if (!(param = malloc(sizeof(t_param) * 1)))
		return (0);
	if (!check_str(buffer))
		return (0);
	while (buffer[i] != '\n')
		i++;
	set_param_attribute(param, buffer[i - 1], buffer[i - 2], buffer[i - 3]);
	i -= 3;
	while (j < i && buffer[j] >= '0' && buffer[j] <= '9')
		total = (total * 10) + (buffer[j++] - 48);
	param->size = total;
	while (*buffer != '\n')
		buffer++;
	buffer++;
	param->length = ft_strlen_n(buffer);
	param->weight = param->length * param->size;
	return (param);
}
