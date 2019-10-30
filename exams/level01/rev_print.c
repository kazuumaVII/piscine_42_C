/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:43:36 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 19:56:14 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
		ft_putchar(str[i--]);
	return (i);

}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rev_print(av[1]);
	ft_putchar('\n');
	return (0);
}
