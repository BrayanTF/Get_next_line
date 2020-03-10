/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_final.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 14:13:09 by jarodrig          #+#    #+#             */
/*   Updated: 2020/02/17 17:40:06 by jarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

int		get_next_line(int fd, char **line);

int		main(void)
{
	int		x;
	int		fd;
	char	*line;

	fd = open("./Prueba.txt", O_RDONLY);
	while ((x = get_next_line(fd, &line)) == 1)
	{
		printf("\nGNL: %d, linea : %s", x, line);
		free(line);
	}
	close(fd);
	return (0);
}
