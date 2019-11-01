/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:26:51 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/31 12:31:32 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkchar(char *str, char c, int len)
{
	int		i;

	i = 0;
	while (str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!checkchar(av[1], av[1][i], i) && checkchar(av[2], av[1][i], -1))
				write(1, av[1] + i, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
