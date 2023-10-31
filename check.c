/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:13:03 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/22 19:11:36 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check(t_solong *so_long)
{
	if (check_elements(so_long) || check_rectangular(so_long)
		|| check_wall(so_long) || check_size(so_long) || check_char(so_long))
	{
		free_matrix(so_long->map);
		exit(1);
	}
	else
		return (0);
}

int	check_elements(t_solong *so_long)
{
	int	exit;
	int	collectible;
	int	player;
	int	empty_space;
	int	i;

	exit = find_exit(so_long);
	collectible = find_collectible(so_long);
	player = find_player(so_long);
	empty_space = find_empty_space(so_long);
	i = 0;
	if (!so_long->map)
		return (1);
	if (exit == 1 && collectible >= 1 && player == 1 && empty_space >= 1)
		return (0);
	else
		ft_printf("Error: check the elements of the map!\n");
	return (1);
}

int	check_rectangular(t_solong *so_long)
{
	int	rows;
	int	cols;

	rows = count_rows(so_long);
	cols = count_cols(so_long);
	if (cols != -1)
	{
		return (0);
	}
	else
	{
		ft_printf("Error : the map must be rectangular \n");
		return (1);
	}
}

int	check_wall(t_solong *so_long)
{
	int	first_row;
	int	last_row;
	int	first_col;
	int	last_col;

	first_row = first_line(so_long);
	last_row = last_line(so_long);
	first_col = first_column(so_long);
	last_col = last_column(so_long);
	if (!so_long->map)
	{
		return (1);
	}
	if (first_row == 1 || last_row == 1 || first_col == 1 || last_col == 1)
	{
		ft_printf("Error : the map must be surrounded by walls!\n");
		return (1);
	}
	else
		return (0);
}

int	check_size(t_solong *so_long)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (so_long->map[i] != NULL)
	{
		j = 0;
		while (so_long->map[i][j] != '\0')
			j++;
		j = j * SIZE;
		if (j > WIDTH + SIZE)
		{
			ft_printf("Error :  invalid map size!");
			return (1);
		}
		i++;
	}
	i = i * SIZE;
	if (i > HEIGHT + SIZE)
	{
		ft_printf("Error : invalid map size!\n");
		return (1);
	}
	return (0);
}
