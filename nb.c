/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:20:59 by tmichel           #+#    #+#             */
/*   Updated: 2023/02/04 16:21:02 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "open.c"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	cut(char *ch)
{
	int	i;
	int	range;
	int	istr;
	
	i = 0;
	istr = ft_strlen(ch);
	range = istr / 3;
	while (i < istr)
	{
	if (ch[i + 0] != '0')
		ft_openhundchar(&ch[i + 0]);
	if (ch[i + 1] != '0' && ch[i + 1] != '1')
		ft_opendecchar(&ch[i + 1]);
	if (ch[i + 1] == '1')
		ft_opendecteen(&ch[i + 2]);
	if (ch[i + 2] != '0' && ch[i + 1] != '1')
		ft_opendigitchar(&ch[i + 2]);
	if((ch[i] != '0') || (ch[i + 1] != '0') || (ch[i + 2] != '0'))
		ft_printrange(range);
	i += 3;
	range --;
	}
}

