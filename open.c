/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:24:42 by tmichel           #+#    #+#             */
/*   Updated: 2023/02/05 14:24:47 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"

void	ft_openhundchar(char chain[1])
{
	int		fd;
	int		i;
	int		count;
	char	buffer[350];

	i = 0;
	count = 0;
	fd = open("dictnb.txt", O_RDONLY);
	read(fd, buffer, 350);
	while (i <= 350 && count == 0)
	{
		if (buffer[i] == chain[0])
			count = 1;
		i++;
	}
	while (buffer[i - 1] != ':')
		i++;
	ft_printhundchar(i, buffer);
}

void	ft_opendecchar(char chain[1])
{
	int		fd;
	int		i;
	int		count;
	char	buffer[350];

	i = 0;
	count = 0;
	fd = open("dictnb.txt", O_RDONLY);
	read(fd, buffer, 350);
	while (i <= 350 && count != 3)
	{
		if (buffer[i] == chain[0])
			count++;
		i++;
	}
	while (buffer[i - 1] != ':')
		i++;
	ft_printdchar(i, buffer);
}

void	ft_opendigitchar(char chain[0])
{
	int		fd;
	int		i;
	int		count;
	char	buffer[350];

	i = 0;
	count = 0;
	fd = open ("dictnb.txt", O_RDONLY);
	read(fd, buffer, 350);
	while (i <= 350 && count == 0)
	{
		if (buffer[i] == chain[0])
			count = 1;
		i++;
	}
	i++;
	while (buffer[i - 1] != ':')
		i++;
	ft_printdchar(i, buffer);
}

void	ft_opendecteen(char chain[1])
{
	int		fd;
	int		i;
	int		count;
	char	buffer[350];

	i = 0;
	count = 0;
	fd = open("dictnb.txt", O_RDONLY);
	read(fd, buffer, 350);
	while (i <= 350 && count != 1)
	{
		if (buffer[i] == '1')
		{
			if (buffer[i + 1] == chain[0])
				count++;
		}
		i++;
	}
	while (buffer[i - 1] != ':')
		i++;
	ft_printdchar(i, buffer);
}
