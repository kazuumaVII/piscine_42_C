/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:38:57 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:39:15 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str && check(*str, charset))
			str++;
		if (*str && !check(*str, charset))
		{
			count++;
			while (*str && !check(*str, charset))
				str++;
		}
	}
	return (count);
}

int		words_len(char *str, char *charset)
{
	int i;

	i = 0;
	while (!check(str[i], charset) && str[i])
		i++;
	return (i + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	if (!(tab = malloc(sizeof(char *) * (count_words(str, charset) + 1))))
		return (NULL);
	while (*str)
	{
		j = 0;
		while (check(*str, charset) && *str)
			str++;
		if (*str && !check(*str, charset))
		{
			if (!(tab[i] = malloc(sizeof(char) *
				(words_len(str, charset) + 1))))
				return (0);
			while (!check(*str, charset) && *str)
				tab[i][j++] = *str++;
			tab[i][j] = '\0';
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
