/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:25:32 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:25:44 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index[4];
	char	*str;

	index[3] = 1;
	index[0] = 0;
	while (strs[index[0]])
		index[3] += ft_strlen(strs[index[0]++]);
	if (!(str = malloc(sizeof(char) * index[3] + ft_strlen(sep) * (size))))
		return (0);
	if (size == 0)
		return (str);
	index[0] = 0;
	index[1] = 0;
	while (strs[index[1]])
	{
		index[2] = 0;
		while (strs[index[1]][index[2]])
			str[index[0]++] = strs[index[1]][index[2]++];
		index[2] = 0;
		while (sep[index[2]] && strs[index[1] + 1])
			str[index[0]++] = sep[index[2]++];
		index[1]++;
	}
	str[index[0]] = '\0';
	return (str);
}
