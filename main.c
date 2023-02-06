/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:58:13 by tmichel           #+#    #+#             */
/*   Updated: 2023/02/03 20:00:00 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "Error \n", 6);
	else if (argc == 2)
		cut(ft_zero(argv[1]));
	else if (argc == 3)
		cutlib(argv[1], ft_zero(argv[2]));
	else
		write(1, "Error \n", 6);
		
	
}

