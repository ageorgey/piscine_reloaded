/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:54:47 by ageorgey          #+#    #+#             */
/*   Updated: 2017/11/12 18:49:05 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 1

int		main(int ac, char **av)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	fd = 0;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while (read(fd, buf, BUF_SIZE))
		{
			buf[BUF_SIZE] = '\0';
			write(1, &buf, 1);
		}
	}
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else if (ac == 1)
		write(2, "File name missing.\n", 19);
	close(fd);
	return (0);
}
