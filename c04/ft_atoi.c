/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:12:20 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:12:24 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int total;

	i = 0;
	total = 0;
	neg = 0;
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
	while (str[i] >= '0' && str[i] <= '9')
		total = (total * 10) + (str[i++] - 48);
	if (neg == 1)
		return (-total);
	return (total);
}
