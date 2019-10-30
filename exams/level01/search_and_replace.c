/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:56:38 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 20:03:34 by frfrance         ###   ########.fr       */
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

	i = 0;
	if (ac == 4)
	{
		while (av[1][i])
		{
			if (!av[2][1] && !av[3][1])
			{
				if (av[2][0] == av[1][i])
					ft_putchar(av[3][0]);
				else
					ft_putchar(av[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
