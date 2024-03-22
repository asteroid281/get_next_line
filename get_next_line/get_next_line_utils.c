/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:34:21 by yunozdem          #+#    #+#             */
/*   Updated: 2024/03/22 18:23:02 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_clean(char *str)
{
	int	isnline;
	int	i;
	int	j;

	isnline = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (isnline)
			str[j++] = str[i];
		if (str[i] == '\n')
			isnline = 1;
		str[i++] = '\0';
	}
	return (isnline);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	int		i;
	int		j;

	if (s2[0] == '\0')
		return (0);
	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (0);
	i = 0;
	while (s1 && s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] && s2[j] != '\n')
		join[i++] = s2[j++];
	if (s2[j] == '\n')
		join[i++] = '\n';
	join[i] = '\0';
	if (s1)
		free(s1);
	return (join);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i] && s[i] != '\n')
		i++;
	if (s && s[i] == '\n')
		i++;
	return (i);
}
