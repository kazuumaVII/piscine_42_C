/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:51:32 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/31 12:55:33 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i;
	int	l;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			l = av[1][i];
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				l = 'Z' - av[1][i] + 'A';
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				l = 'z' - av[1][i] + 'a';
			ft_putchar(l);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
