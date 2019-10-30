/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:14:46 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:14:53 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		main(int ac, char **av)
{
	int i;

	i = ac;
	while (i > 1)
	{
		ft_putstr(av[--i]);
		write(1, "\n", 1);
	}
	return (0);
}
