/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_v4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:56:17 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 16:58:32 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_haut(int x, int b)
{
	if (b > 1 && b < x)
		ft_putchar('B');
	else if (b == x && x != 1)
		ft_putchar('C');
	else
		ft_putchar('A');
}

void	middle(int x, int b)
{
	if (b > 1 && b < x)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	bas(int x, int b)
{
	if (b > 1 && b < x)
		ft_putchar('B');
	else if (b == x && x != 1)
		ft_putchar('C');
	else
		ft_putchar('A');
}

void	rush_v4(int x, int y)
{
	int	a;
	int	b;

	if (x > 0 && y > 0)
	{
		a = 1;
		while (a <= y)
		{
			b = 1;
			while (b <= x)
			{
				if (a == 1)
					ft_haut(x, b);

				else if (a > 1 && a < y)
					middle(x, b);
				else if (a == y)
					bas(x, b);
				b++;

			}
			ft_putchar('\n');
			a++;
		}
	}
	else
		write(1, "Merci de mettre une valleur positif\n", 37);

}

int	main(int ac, char **av)
{
	rush_v4(atoi(av[1]), atoi(av[2]));
	return (0);
}
