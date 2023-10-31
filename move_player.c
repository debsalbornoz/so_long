/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:42:41 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/23 20:26:58 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_player_up(t_solong *so_long, int i, int j)
{
	char	**map;

	map = so_long->map;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] == 'P' && map[i - 1][j] != '1')
			{
				if (map[i - 1][j] == 'E')
					check_collectible_up(so_long, i, j);
				if (map[i][j] == 'P' && map[i - 1][j] != 'E')
				{
					map[i][j] = '0';
					map[i - 1][j] = 'P';
				}
			}
			j++;
		}
		i++;
	}
	render(so_long);
}

void	move_player_down(t_solong *so_long, int i, int j)
{
	char	**map;
	int		player_found;

	map = so_long->map;
	player_found = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0' && !player_found)
		{
			if (map[i][j] == 'P' && map[i + 1][j] != '1')
			{
				if (map[i + 1][j] == 'E')
					check_collectible_down(so_long, i, j);
				if (map[i][j] == 'P' && map[i + 1][j] != 'E')
				{
					map[i][j] = '0';
					map[i + 1][j] = 'P';
					player_found = 1;
				}
			}
			j++;
		}
		i++;
	}
}

void	move_player_left(t_solong *so_long, int i, int j)
{
	char	**map;

	map = so_long->map;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] == 'P' && map[i][j - 1] != '1')
			{
				if (map[i][j - 1] == 'E')
					check_collectible_left(so_long, i, j);
				if (map[i][j] == 'P' && map[i][j - 1] != 'E')
				{
					map[i][j] = '0';
					map[i][j - 1] = 'P';
				}
			}
			j++;
		}
		i++;
	}
	render(so_long);
}

void	move_player_right(t_solong *so_long, int i, int j)
{
	char	**map;
	int		player_found;

	map = so_long->map;
	player_found = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0' && !player_found)
		{
			if (map[i][j] == 'P' && map[i][j + 1] != '1')
			{
				if (map[i][j + 1] == 'E')
					check_collectible_right(so_long, i, j);
				if (map[i][j] == 'P' && map[i][j + 1] != 'E')
				{
					map[i][j] = '0';
					map[i][j + 1] = 'P';
					player_found = 1;
				}
			}
			j++;
		}
		i++;
	}
}

void	increment_moves(t_solong *so_long)
{
	so_long->num_moves = so_long->num_moves + 1;
	ft_printf("The current number of moves is : %i\n", so_long->num_moves);
}
