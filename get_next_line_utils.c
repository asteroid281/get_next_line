/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:34:21 by yunozdem          #+#    #+#             */
/*   Updated: 2024/04/20 15:43:05 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dst;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	dst = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = -1;
	while (s1[++i])
		dst[i] = s1[i];
	j = -1;
	while (s2[++j])
		dst[i + j] = s2[j];
	dst[i + j] = 0;
	free(s1);
	return (dst);
}

char	*ft_strchr(char *str, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = c;
	if (!str)
		return (NULL);
	if (ch == '\0')
	{
		i = ft_strlen(str);
		return ((char *)str + i);
	}
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
