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

void	ft_printhundchar(int g, char *line)
{
	int	hund;
	int	i;
	
	hund = 0;
	i = 0;
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

void	ft_printdchar(int g , char *line)
{
	while (line[g] != '\n' && line[g])
	{
		write(1, &line[g], 1);
		g++;
	}
}

void	ft_billion()
{
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open("dictnb.txt", O_RDONLY);
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
		ft_printdchar(i , buffer);	
}

void	ft_million()
{
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open("dictnb.txt", O_RDONLY);
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
		ft_printdchar(i , buffer);	
}

void	ft_thousand()
{
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open("dictnb.txt", O_RDONLY);
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
		ft_printdchar(i , buffer);
}

void ft_printrange(int g)
{
	int	fd;
	int	i;
	int	count;
	char buffer[3500];
	
	i = 0;
	count = 0;
	fd= open("dictnb.txt", O_RDONLY);
	read(fd,buffer,3500);
		if(g == 4)
			ft_billion();	
		if(g == 3)
			ft_million();
		if(g == 2)
			ft_thousand();
		//while(buffer[i-1] != ':')
		//		i++;
		//if (count != 0 && g >= 2)
		//ft_lib_printdchar(i , buffer);
}


