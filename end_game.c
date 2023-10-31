/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:04:14 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/20 18:35:29 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_window(t_solong *so_long)
{
	free_matrix(so_long->map);
	mlx_destroy_image(so_long->mlx_ptr, so_long->wall_img);
	mlx_destroy_image(so_long->mlx_ptr, so_long->collectible_item_img);
	mlx_destroy_image(so_long->mlx_ptr, so_long->player_img);
	mlx_destroy_image(so_long->mlx_ptr, so_long->exit_img);
	mlx_destroy_image(so_long->mlx_ptr, so_long->empty_space_img);
	mlx_loop_end(so_long->mlx_ptr);
	mlx_destroy_window(so_long->mlx_ptr, so_long->win_ptr);
	mlx_destroy_display(so_long->mlx_ptr);
	free(so_long->mlx_ptr);
	exit(0);
	return (0);
}

int	end_game(t_solong *so_long)
{
	free_matrix(so_long->map);
	mlx_destroy_image(so_long->mlx_ptr, so_long->wall_img);
	mlx_destroy_image(so_long->mlx_ptr, so_long->collectible_item_img);
	mlx_destroy_image(so_long->mlx_ptr, so_long->player_img);
	mlx_destroy_image(so_long->mlx_ptr, so_long->exit_img);
	mlx_destroy_image(so_long->mlx_ptr, so_long->empty_space_img);
	mlx_loop_end(so_long->mlx_ptr);
	mlx_destroy_window(so_long->mlx_ptr, so_long->win_ptr);
	mlx_destroy_display(so_long->mlx_ptr);
	free(so_long->mlx_ptr);
	exit(0);
	return (0);
}

void	free_matrix(char **map)
{
	int	i;

	i = 0;
	if (map)
	{
		while (map[i] != NULL)
		{
			free(map[i]);
			i++;
		}
		free(map);
	}
}

void	free_copy_map(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
