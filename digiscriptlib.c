/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digiscript.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:49:29 by tmichel           #+#    #+#             */
/*   Updated: 2023/02/05 14:49:31 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lib_printhundchar(int g, char *line)
{
	int	i;
	int	hund;
	
	i = 0;
	hund = 0;
	while (line[g] != '\n')
	{
		write(1, &line[g], 1);
		g++;
	}
	while (hund < 29)
	{
		if(line[i] == ':')
			hund++;
		i++;
	}
	while (line[i] != '\n')
	{
		write(1, &line[i], 1);
		i++;
	}
}

void	ft_lib_printdchar(int g , char *line)
{
	while (line[g] != '\n' && line[g])
	{
		write(1, &line[g], 1);
		g++;
	}
}

void	ft_lib_billion(char *lib)
{
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open(lib, O_RDONLY);
	read(fd,buffer,3500);
	while(count != 32)
	{
		if(buffer[i] == ':')
			count++;
		i++;
	}
	while(buffer[i-1] != ':')
			i++;
	if (count != 0)
		ft_lib_printdchar(i , buffer);	
}

void	ft_lib_million(char *lib)
{
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open(lib, O_RDONLY);
	read(fd,buffer,3500);
	while(count != 31)
	{
		if(buffer[i] == ':')
			count++;
		i++;
	}
	while(buffer[i-1] != ':')
			i++;
	if (count != 0)
		ft_lib_printdchar(i , buffer);	
}

void	ft_lib_thousand(char *lib)
{
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open(lib, O_RDONLY);
	read(fd,buffer,3500);
	while(count != 30)
	{
		if(buffer[i] == ':')
			count++;
		i++;
	}
	while(buffer[i-1] != ':')
		i++;
	if (count != 0)
		ft_lib_printdchar(i , buffer);
}

void ft_lib_printrange(char *lib, int g)
{
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open(lib, O_RDONLY);
	read(fd,buffer,3500);
		if(g == 4)
			ft_lib_billion(lib);	
		if(g == 3)
			ft_lib_million(lib);
		if(g == 2)
			ft_lib_thousand(lib);
		//while(buffer[i-1] != ':')
		//		i++;
		//if (count != 0 && g >= 2)
		//ft_lib_printdchar(i , buffer);
}
