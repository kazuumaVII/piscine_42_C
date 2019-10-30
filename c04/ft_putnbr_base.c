/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:12:54 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:12:57 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	while (base[i])
	{
		j = i + 1;
		while (base[i] != base[j] && base[j])
			j++;
		if ((base[i] == base[j]) || !((base[i] >= 'a' && base[i] <= 'z') ||
				(base[i] >= 'A' && base[i] <= 'Z') || (base[i] >= '0' &&
				base[i] <= '9')))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				i;

	i = 0;
	if (ft_check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (nbr >= ft_strlen(base))
		ft_putnbr_base(nbr / ft_strlen(base), base);
	ft_putchar(base[nbr % ft_strlen(base)]);
}
