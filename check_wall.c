/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:52:59 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/22 19:25:11 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	first_line(t_solong *so_long)
{
	int	j;
	int	wall;
	int	columns;

	wall = 0;
	columns = count_cols(so_long);
	j = 0;
	while (so_long->map[0][j] != '\0')
	{
		if (so_long->map[0][j] == '1')
			wall++;
		if (so_long->map[0][j] != '1')
			break ;
		j++;
	}
	if (so_long->map[0])
	{
		if (wall < columns || wall > columns)
			return (1);
	}
	return (0);
}

int	last_line(t_solong *so_long)
{
	int	j;
	int	wall;
	int	columns;
	int	rows;

	wall = 0;
	columns = count_cols(so_long);
	rows = count_rows(so_long);
	j = 0;
	while (so_long->map[rows - 1][j] != '\0')
	{
		if (so_long->map[rows - 1][j] == '1')
			wall++;
		if (so_long->map[rows - 1][j] != '1')
			return (1);
		j++;
	}
	if (so_long->map[rows - 1])
	{
		if (wall < columns || wall > columns)
			return (1);
	}
	return (0);
}

int	first_column(t_solong *so_long)
{
	int	i;
	int	j;
	int	wall;
	int	columns;
	int	rows;

	wall = 0;
	columns = count_cols(so_long);
	rows = count_rows(so_long);
	i = 0;
	j = 0;
	while (so_long->map[i] != NULL)
	{
		if (so_long->map[i][0] == '1')
			wall++;
		if (so_long->map[i][0] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	last_column(t_solong *so_long)
{
	int	i;
	int	j;
	int	wall;
	int	columns;
	int	rows;

	wall = 0;
	columns = count_cols(so_long);
	rows = count_rows(so_long);
	i = 0;
	j = 0;
	while (so_long->map[i] != NULL)
	{
		if (so_long->map[i][columns - 1] == '1')
			wall++;
		if (so_long->map[i][columns - 1] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	check_char(t_solong *so_long)
{
	int	i;
	int	j;

	i = 0;
	while (so_long->map[i] != NULL)
	{
		j = 0;
		while (so_long->map[i][j] != '\0')
		{
			if (so_long->map[i][j] != '0' && so_long->map[i][j] != 'P'
				&& so_long->map[i][j] != '1' && so_long->map[i][j] != 'C'
				&& so_long->map[i][j] != 'E' && so_long->map[i][j] != '\n')
			{
				ft_printf("Error : check the elements of the map\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
