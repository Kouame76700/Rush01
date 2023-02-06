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

void	ft_lib_openhundchar(char *lib, char chain[1])
{
	int	n;
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open(lib, O_RDONLY);
	n = read(fd,buffer,3500);
	while(i <= n && count == 0)
	{
		if(buffer[i] == chain[0])
			count = 1;
			
		i++; 
	}
	while(buffer[i-1] != ':')
		i++;
	ft_lib_printhundchar(i, buffer);
}
void	ft_lib_opendecchar(char *lib, char chain[1])
{
	int	n;
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open(lib , O_RDONLY);
	n = read(fd,buffer,3500);
	while(i <= n && count != 3)
	{
		if(buffer[i] == chain[0])
			count++;
		i++; 
	}
	while(buffer[i-1] != ':')
		i++;
	ft_printdchar(i , buffer);
}
void	ft_lib_opendigitchar(char *lib, char chain[0])
{
	int	n;
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open(lib, O_RDONLY);
	n = read(fd,buffer,3500);
	while(i <= n && count == 0)
	{
		if(buffer[i] == chain[0])
			count = 1;
			
		i++;
	}
	i++;
	while(buffer[i-1] != ':')
		i++;
	ft_printdchar(i , buffer);
}

void	ft_lib_opendecteen(char *lib, char chain[1])
{
	int	n;
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open(lib, O_RDONLY);
	n = read(fd,buffer,3500);
	while(i <= n && count != 1)
	{
		if(buffer[i] == '1')
		{
			if(buffer[i+1] == chain[0])
				count++;
		}
		i++; 
	}
	while(buffer[i-1] != ':')
		i++;
	ft_printdchar(i , buffer);
}
