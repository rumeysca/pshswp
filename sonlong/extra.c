/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:09:27 by rcan              #+#    #+#             */
/*   Updated: 2024/04/29 22:43:07 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	ft_error(char *error)
{
	ft_printf("Error\n");
	ft_printf("%s", error);
	exit (0);
}

int ft_len(char **line)
{
	int j;
	
	j = 0;
	while(line[j])
	{
		j++;
	}
	return (j);
}

int ft_linelen(char *line)
{
	int i;
	
	i = 0;
	while(line[i])
	{
		i++;
	}
	return (i);
}

int	ber_checker(char *ber)
{
	int len;

	len = ft_linelen(ber);
	if(ber[len - 4] == '.')
	{
		if(ber[len - 3] == 'b')
		{
			if(ber[len - 2] == 'e')
			{	
				if(ber[len - 1] == 'r')
					return (0);
			}
		}
	}
	return (1);
}

char	*ft_strjoy(char *s1, char *s2)
{
	char	*d;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1)
	{
		d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!d)
			return (NULL);
		while (s1[i] != '\0')
		{
			d[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			d[i++] = s2[j];
			j++;
		}
		d[i] = '\0';
		return (d);
	}
	return (0);
}
