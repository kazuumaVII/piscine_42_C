/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:16:11 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 18:31:16 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		a;

	a = 0;
	if (ac == 2)
	{
		while (av[1][a] != '\0')
		{
			if (av[1][a] == 'a')
			{
				ft_putchar('a');
				break;
			}
			a++;
		}
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
