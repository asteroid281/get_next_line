/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:38:33 by yunozdem          #+#    #+#             */
/*   Updated: 2024/04/21 19:16:23 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*ft_strchr(char *str, int c);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*get_line_from_buffer(char *buffer);
char	*get_next_line(int fd);
char	*clean_buffer(char *buffer);

#endif
