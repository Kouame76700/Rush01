/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_till3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:17:29 by cspreafi          #+#    #+#             */
/*   Updated: 2023/02/05 11:18:32 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


int	ft_strlen2(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_zero(char *str)
{
	int	i;
	int 	j;
	int	count;
	char	*copy;

	copy = str;
	i = ft_strlen2(copy);
	j = i;
	count = 0;
	while (i % 3 != 0)
	{
		i++;
	}
	j = (i - j);
	str = malloc(i * sizeof(char));
	while (j != 0)
	{
		str[count] = '0';
		j--;
		count++;
	}
	while (copy[j] != '\0')
	{
		str[count] = copy[j];
		count++;
		j++;
	}
	count = 0;
	//while (str[count] != '\0')
	//{
	//	write(1, &str[count], 1);
	//	count++;
	//}
	return (str);
}
