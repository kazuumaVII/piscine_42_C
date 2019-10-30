/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:55:10 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:55:19 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_param
{
	int				weight;
	int				size;
	int				length;
	char			empty;
	char			obstacle;
	char			fill;
}					t_param;

typedef struct		s_case
{
	char			origin;
	int				value;
}					t_case;

typedef struct		s_point
{
	int				value;
	int				x;
	int				y;
}					t_point;

char				*open_file(char *file_name);
char				*standard_entry(void);
t_param				*set_param(char *buffer);
t_case				**create_map(char *buffer, t_param *param);
void				find_square(t_case **map, t_param *param, t_point *point);
void				display_final(t_case **map, t_point *point, t_param *param);
int					check_map(t_param *param, char *buffer);
void				ft_putstr_error(char *str);
void				free_map(t_case **map, t_param *param);
int					ft_strlen_n(char *str);
int					ft_strlen(char *str);
void				standard(t_point *point, t_case **map);
void				file_name(char **av, t_point *point, t_case **map);

#endif
