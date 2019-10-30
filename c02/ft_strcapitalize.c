/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:04:56 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 13:05:09 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int up;

	i = 0;
	up = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (up && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!up && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			up = 0;
		}
		else
			up = 1;
		i++;
	}
	return (str);
}
