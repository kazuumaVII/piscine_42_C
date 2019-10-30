/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:57:26 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:57:36 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	int		total;
	char	*str;

	total = 1;
	i = -1;
	j = 0;
	total += ft_strlen(str1) + 4096;
	if (!(str = malloc(sizeof(char) * total)))
		return (0);
	while (str1[++i])
		str[i] = str1[i];
	while (j < 4096)
		str[i++] = str2[j++];
	str[i] = '\0';
	return (str);
}

char	*standard_entry(void)
{
	char	temp[4096];
	char	*buffer;
	int		size;
	int		check;

	check = 0;
	if (!(buffer = (char *)malloc(sizeof(char) * 1)))
		return (0);
	buffer[0] = '\0';
	while ((size = read(0, temp, 4095)))
	{
		temp[size] = '\0';
		if (!(temp[0] >= '0' && temp[0] <= '9') && !check)
			return (buffer);
		check = 1;
		buffer = ft_strjoin(buffer, temp);
	}
	return (buffer);
}

int		read_size(char *file_name)
{
	int		fd;
	int		size;
	char	temp[4096];
	int		check;
	int		ret;

	check = 0;
	ret = 0;
	if ((fd = open(file_name, O_RDONLY)) == -1)
	{
		ft_putstr_error("Error\n");
		return (-1);
	}
	size = 0;
	while ((ret = read(fd, temp, 4096)))
	{
		if (!(temp[0] >= '0' && temp[0] <= '9') && !check)
			return (0);
		check = 1;
		size += ret;
	}
	close(fd);
	return (size);
}

char	*open_file(char *file_name)
{
	char	*buffer;
	int		size;
	int		fd;

	size = read_size(file_name);
	if (size == 0)
	{
		ft_putstr_error("map error\n");
		return (0);
	}
	if (size == -1)
		return (0);
	if (!(buffer = malloc(sizeof(char) * size)))
		return (0);
	if (!(fd = open(file_name, O_RDONLY)))
		return (0);
	read(fd, buffer, size);
	buffer[size] = '\0';
	close(fd);
	return (buffer);
}
