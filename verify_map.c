/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:09:59 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/20 15:50:54 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_extension(char **argv)
{
	size_t	ext_length;
	size_t	arg_length;

	ext_length = 4;
	arg_length = ft_strlen(argv[1]);
	if (arg_length >= ext_length)
	{
		if (ft_strncmp(argv[1] + arg_length - ext_length, ".ber",
				ext_length) != 0 || ft_strncmp(argv[1] + arg_length - 2
				* ext_length, ".ber", ext_length) == 0)
		{
			ft_printf("Error: Invalid map extension\n");
			return (1);
		}
	}
	return (0);
}

int	check_arguments(int argc)
{
	if (argc != 2)
	{
		ft_printf("Error : Invalid number of arguments\n");
		return (1);
	}
	return (0);
}
