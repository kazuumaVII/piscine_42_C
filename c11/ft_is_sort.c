/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:47:06 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:47:32 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		order(int a, int b)
{
	return (a - b);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1 &&(*f)(tab[i], tab[i + 1]) <= 0)
		i++;
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1 && (*f)(tab[i], tab[i + 1]) >= 0)
		i++;
	if (i == length - 1)
		return (1);
	return (0);
}

int main()
{
	int tab[6] = {552, 259, 179, 106, 48, 15};
	printf("%i\n", ft_is_sort(tab, 6, order));
	return (0);
}
