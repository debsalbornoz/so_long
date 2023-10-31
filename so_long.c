/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:28:23 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/20 17:27:51 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_solong	so_long;
	const char	*filename;

	if (check_arguments(argc) == 1)
		exit(1);
	if (check_map_extension(argv) == 1)
		exit(1);
	initialize_variables(&so_long);
	filename = argv[1];
	so_long.file = &filename;
	so_long.map = read_map(&so_long);
	check(&so_long);
	flood_fill(&so_long);
	if (argc == 2 && check(&so_long) == 0)
	{
		so_long.mlx_ptr = mlx_init();
		so_long.win_ptr = mlx_new_window(so_long.mlx_ptr, WIDTH, HEIGHT,
				"so long");
		create_images(&so_long);
		mlx_hook(so_long.win_ptr, 17, 0, &close_window, &so_long);
		mlx_key_hook(so_long.win_ptr, key_hook, &so_long);
		map_elements(&so_long);
		mlx_loop(so_long.mlx_ptr);
	}
	return (0);
}
