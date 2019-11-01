/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:42:38 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/31 12:45:26 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	char	bits[8];
	int		nb;
	int		count;
	char	z;

	nb = octet;
	count = 0;
	while (count < 8)
	{
		bits[count] = nb % 2;
		nb = nb / 2;
		count++;
	}
	while (count - 1 >= 0)
	{
		z = bits[count - 1] + 48;
		write(1, &z, 1);
		count--;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_bits(atoi(av[1]));
	else
		printf("Erreur d'arguments\n");
	return (0);
}
