/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:05:37 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/09 18:30:23 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	create_exit(t_solong *so_long)
{
	mlx_put_image_to_window(so_long->mlx_ptr, so_long->win_ptr,
		so_long->exit_img, so_long->x, so_long->y);
	return (0);
}

int	create_collectible_item(t_solong *so_long)
{
	mlx_put_image_to_window(so_long->mlx_ptr, so_long->win_ptr,
		so_long->collectible_item_img, so_long->x, so_long->y);
	return (0);
}

int	create_player(t_solong *so_long)
{
	mlx_put_image_to_window(so_long->mlx_ptr, so_long->win_ptr,
		so_long->player_img, so_long->x, so_long->y);
	return (0);
}

int	create_wall(t_solong *so_long)
{
	mlx_put_image_to_window(so_long->mlx_ptr, so_long->win_ptr,
		so_long->wall_img, so_long->x, so_long->y);
	return (0);
}

int	create_empty_space(t_solong *so_long)
{
	mlx_put_image_to_window(so_long->mlx_ptr, so_long->win_ptr,
		so_long->empty_space_img, so_long->x, so_long->y);
	return (0);
}
