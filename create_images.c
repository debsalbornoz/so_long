/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:38:52 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/23 20:50:38 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_images(t_solong *so_long)
{
	int	img_width;
	int	img_height;

	so_long->collectible_item_img = mlx_xpm_file_to_image(so_long->mlx_ptr,
			"./textures/collectible_item.xpm", &img_width, &img_height);
	so_long->player_img = mlx_xpm_file_to_image(so_long->mlx_ptr,
			"./textures/player.xpm", &img_width, &img_height);
	so_long->wall_img = mlx_xpm_file_to_image(so_long->mlx_ptr,
			"./textures/wall.xpm", &img_width, &img_height);
	so_long->empty_space_img = mlx_xpm_file_to_image(so_long->mlx_ptr,
			"./textures/empty_space.xpm", &img_width, &img_height);
	so_long->exit_img = mlx_xpm_file_to_image(so_long->mlx_ptr,
			"./textures/exit.xpm", &img_width, &img_height);
}

void	map_elements(t_solong *so_long)
{
	int	i;
	int	j;

	i = -1;
	while (so_long->map[++i] != NULL)
	{
		j = 0;
		while (so_long->map[i][j] != '\0' && so_long->map[i][j] != '\n')
		{
			if (so_long->map[i][j] == '1')
				create_wall(so_long);
			else if (so_long->map[i][j] == 'C')
				create_collectible_item(so_long);
			else if (so_long->map[i][j] == 'P')
				create_player(so_long);
			else if (so_long->map[i][j] == 'E')
				create_exit(so_long);
			else if (so_long->map[i][j] == '0')
				create_empty_space(so_long);
			so_long->x += SIZE;
			j++;
		}
		so_long->x = 0;
		so_long->y += SIZE;
	}
}

void	render(t_solong *so_long)
{
	mlx_clear_window(so_long->mlx_ptr, so_long->win_ptr);
	so_long->x = 0;
	so_long->y = 0;
	map_elements(so_long);
}
