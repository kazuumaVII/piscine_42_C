/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:46:40 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/31 12:47:14 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char const *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		main(int argc, char const *argv[])
{
	int		i;
	int		j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i += 1;
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
