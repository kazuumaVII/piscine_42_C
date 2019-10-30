/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:13:22 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:13:32 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_index(char c, char *base, int option)
{
	int i;

	if (option == 1)
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == c)
				return (i);
			i++;
		}
		return (-1);
	}
	else if (option == 2)
	{
		i = 0;
		while (base[i])
			i++;
		return (i);
	}
	return (0);
}

int	ft_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_power(nb, power - 1));
	return (result);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

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

int	ft_atoi_base(char *str, char *base)
{
	int				i;
	int				neg;
	unsigned int	total;
	int				j;

	i = 0;
	j = 0;
	total = 0;
	neg = 0;
	if (!ft_check_base(base))
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
		str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' && neg == 0)
			neg = 1;
		else if (str[i] == '-' && neg == 1)
			neg = 0;
		i++;
	}
	while (str[j])
		j++;
	j -= 1;
	while ((str[i] >= '0' && str[i] <= '9') ||
		(str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		total += ft_find_index(str[i], base, 1) *
			ft_power(ft_find_index(str[i], base, 2), j--);
		i++;
	}
	if (neg == 1)
		return (-total);
	return (total);
}
