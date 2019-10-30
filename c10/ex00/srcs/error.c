/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:42:17 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:42:25 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	message_error(int errno)
{
	if (errno == 1)
		write(2, "File name missing.\n", 19);
	if (errno == 2)
		write(2, "Too many arguments.\n", 20);
	if (errno == 3)
		write(2, "Cannot read file.\n", 18);
}
