/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 09:01:40 by frfrance          #+#    #+#             */
/*   Updated: 2019/11/01 09:55:13 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int		ft_atoi(char *str)
{
	int	i;
	int	t;
	int	neg;

	i = 0;
	t = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		t = t * 10 + (str[i] - 48);
		i++;
	}
	return (t * neg);
}

int		ft_prime(unsigned int nb)
{
	int		i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);

	while (nb % i != 0)
	{
		if (i >= nb)
			return (0);
		i++;
	}
	if (nb == i)
		return (1);
	else
		return (0);

}

int		main(int ac, char **av)
{
	int		i;
	int		sum;
	int		nb;

	i = 0;
	if (ac != 2 || av[1][0] == '-')
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	nb = ft_atoi(av[1]);
	while (i <= nb)
	{
		if (ft_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	return (0);
}
