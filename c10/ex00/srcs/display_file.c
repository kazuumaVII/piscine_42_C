/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:41:56 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:42:04 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_print_standard(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_display(char *av)
{
	int		fd;
	char	buffer[4000000];

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		message_error(3);
		return ;
	}
	read(fd, buffer, 4000000);
	ft_print_standard(buffer);
	close(fd);
}
