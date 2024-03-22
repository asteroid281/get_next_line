/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:34:32 by yunozdem          #+#    #+#             */
/*   Updated: 2024/03/22 19:04:46 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	line[BUFFER_SIZE + 1];
	char		*nextline;
	int			i;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	nextline = ft_strjoin(0, line);
	if (ft_clean(line) > 0)
		return (nextline);
	i = read(fd, line, BUFFER_SIZE);
	if (i < 0)
	{
		free(nextline);
		return (NULL);
	}
	while (i > 0)
	{
		nextline = ft_strjoin(nextline, line);
		if (ft_clean(line) > 0)
			break ;
		i = read(fd, line, BUFFER_SIZE);
	}
	return (nextline);
}


#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd = open("text.txt", O_CREAT | O_RDWR, 0777);
	size_t i = 1;
	
    char *line = get_next_line(fd);
    while (line != NULL)
	{
        printf("%zu: %s\n", ++i, line); // i'nin değerini artır ve satır numarasını yazdır
        free(line); // Aldığınız belleği serbest bırak
        line = get_next_line(fd);
    }
	printf("BUFF; %d\n",BUFFER_SIZE);
    close(fd); // Dosyayı kapat
    return 0;
	
	system("a.out leaks");
}