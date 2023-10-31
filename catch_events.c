/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:10:39 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/23 19:49:19 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int keycode, t_solong *so_long)
{
	if (keycode == ESC)
		end_game(so_long);
	else if (keycode == UP || keycode == W)
	{
		move_player_up(so_long, 0, 0);
		increment_moves(so_long);
	}
	else if (keycode == DOWN || keycode == S)
	{
		move_player_down(so_long, 0, 0);
		render(so_long);
		increment_moves(so_long);
	}
	else if (keycode == LEFT || keycode == A)
	{
		move_player_left(so_long, 0, 0);
		increment_moves(so_long);
	}
	else if (keycode == RIGHT || keycode == D)
	{
		move_player_right(so_long, 0, 0);
		render(so_long);
		increment_moves(so_long);
	}
	return (0);
}
