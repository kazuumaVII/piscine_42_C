/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:12:16 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/31 12:26:15 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int	i;
	char *tab;

	i = 0;
	if (!(tab = malloc(sizeof(char) * ft_strlen(src))))
		return (0);
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);

}

int	main(int ac, char **av)
{
	int	i;
	char *tab;

	i = 0;
	tab = ft_strdup(av[1]);
	while (tab[i])
		printf("%c\n", tab[i++]);
	return (0);
}
