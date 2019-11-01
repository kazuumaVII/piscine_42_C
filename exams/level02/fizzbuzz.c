/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 13:10:27 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/31 13:27:59 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = nb;
	if (nb < 0)
	{
		i = -nb;
		ft_putchar('-');
	}
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + 48);
}

int	main(int ac, char **av)
{
	int	i;
	int	nb;


	nb = 0;
	while (nb <= 100)
	{

		if (nb % 3 == 0)
			write(1, "fizz", 6);
		else if (nb % 5 == 0)
			write(1, "buzz", 6);
		else if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizz_buzz", 11);
		else
			ft_putnbr(nb);
		nb++;
		ft_putchar('\n');
	}

}
