/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:10:10 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:10:26 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i])
			i++;
		if (!to_find[i])
			return (str);
		else
			str++;
	}
	return (0);
}
