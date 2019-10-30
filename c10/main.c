/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:42:45 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:42:48 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac > 2)
			message_error(2);
		if (ac == 1)
			message_error(1);
		return (0);
	}
	ft_display(av[1]);
	return (0);
}
