/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:02:29 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/15 21:53:22 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	find_exit(t_solong *so_long)
{
	int	i;
	int	j;
	int	exit;

	exit = 0;
	i = 0;
	j = 0;
	if (!so_long->map)
		return (1);
	while (so_long->map[i] != NULL)
	{
		j = 0;
		while (so_long->map[i][j] != '\0')
		{
			if (so_long->map[i][j] == 'E')
			{
				exit++;
			}
			j++;
		}
		i++;
	}
	return (exit);
}

int	find_collectible(t_solong *so_long)
{
	int	i;
	int	j;
	int	collectible;

	collectible = 0;
	i = 0;
	j = 0;
	if (!so_long->map)
		return (1);
	while (so_long->map[i] != NULL)
	{
		j = 0;
		while (so_long->map[i][j] != '\0')
		{
			if (so_long->map[i][j] == 'C')
			{
				collectible++;
			}
			j++;
		}
		i++;
	}
	return (collectible);
}

int	find_player(t_solong *so_long)
{
	int	i;
	int	j;
	int	player;

	player = 0;
	i = 0;
	j = 0;
	if (!so_long->map)
		return (1);
	while (so_long->map[i] != NULL)
	{
		j = 0;
		while (so_long->map[i][j] != '\0')
		{
			if (so_long->map[i][j] == 'P')
			{
				player++;
			}
			j++;
		}
		i++;
	}
	return (player);
}

int	find_empty_space(t_solong *so_long)
{
	int	i;
	int	j;
	int	empty_space;

	empty_space = 0;
	i = 0;
	j = 0;
	if (!so_long->map)
		return (1);
	while (so_long->map[i] != NULL)
	{
		j = 0;
		while (so_long->map[i][j] != '\0')
		{
			if (so_long->map[i][j] == '0')
			{
				empty_space++;
			}
			j++;
		}
		i++;
	}
	return (empty_space);
}
