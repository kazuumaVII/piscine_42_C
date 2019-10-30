/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:31:30 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:31:53 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main(int ac, char **av)
{
	char				*tab[6] = {"Thomas", "Clemence", "Francois", "Margaux", "Fahd", "Lynne"};
	struct s_stock_str	*edited;

	edited = ft_strs_to_tab(8, tab);
	edited[4].copy = "coucou comment vas ?";
	ft_show_tab(edited);
	return (0);
}
