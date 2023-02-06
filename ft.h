/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgourlai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:00:59 by mgourlai          #+#    #+#             */
/*   Updated: 2023/02/05 23:01:02 by mgourlai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_printhundchar(int g, char *line);
void	ft_printdchar(int g, char *line);
void	ft_billion();
void	ft_million();
void	ft_thousand();
void	ft_printrange(int g);
void	ft_lib_printhundchar(int g, char *line);
void	ft_lib_printdchar(int g, char *line);
void	ft_lib_billion(char *lib);
void	ft_lib_million(char *lib);
void	ft_lib_thousand(char *lib);
void	ft_lib_printrange(char *lib, int g);
int	ft_strlen2(char *str);
char	*ft_zero(char *str);
int	ft_strlen(char *str);
void	cut(char *ch);
int	ft_strlenlib(char *str);
void	cutlib(char *lib, char *ch);
void	ft_openhundchar(char main[1]);
void	ft_opendecchar(char chain[1]);
void	ft_opendigitchar(char chain[0]);
void	ft_opendecteen(char chain[1]);
void	ft_lib_openhundchar(char *lib, char chain[1]);
void	ft_lib_opendecchar(char *lib, char chain[1]);
void	ft_lib_opendigitchar(char *lib, char chain[0]);
void	ft_lib_opendecteen(char *lib, char chain[1]);

#endif
