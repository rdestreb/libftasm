/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_cat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 15:33:38 by rdestreb          #+#    #+#             */
/*   Updated: 2015/06/09 17:19:36 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "libfts.h"

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		ft_cat(0);
		return (0);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		ft_cat(fd);
	}
	close(fd);
	return (0);
}
