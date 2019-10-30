/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:53:04 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 19:03:14 by frfrance         ###   ########.fr       */
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
	l = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			l = av[1][i];
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				l = l - 65;
				{
					while (l >= 0)
					{
						ft_putchar(av[1][i]);
						l--;
					}
				}
			}
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				l = l - 97;
				{
					while (l >= 0)
					{
						ft_putchar(av[1][i]);
						l--;
					}
				}
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
