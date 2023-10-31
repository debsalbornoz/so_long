/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collectible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:00:37 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/23 19:22:17 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_collectible_up(t_solong *so_long, int i, int j)
{
	if (find_collectible(so_long) == 0)
	{
		if (so_long->map[i - 1][j] == 'E')
			end_game(so_long);
	}
}

void	check_collectible_down(t_solong *so_long, int i, int j)
{
	if (find_collectible(so_long) == 0)
	{
		if (so_long->map[i + 1][j] == 'E')
			end_game(so_long);
	}
}

void	check_collectible_left(t_solong *so_long, int i, int j)
{
	if (find_collectible(so_long) == 0)
	{
		if (so_long->map[i][j - 1] == 'E')
			end_game(so_long);
	}
}

void	check_collectible_right(t_solong *so_long, int i, int j)
{
	if (find_collectible(so_long) == 0)
	{
		if (so_long->map[i][j + 1] == 'E')
			end_game(so_long);
	}
}
