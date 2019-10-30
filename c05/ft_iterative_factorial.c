/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:16:34 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:16:38 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	total = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (total);
	while (nb > 1)
		total *= nb--;
	return (total);
}
