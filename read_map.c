/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:22:32 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/22 22:47:53 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

char	**read_map(t_solong *so_long)
{
	int		fd;
	int		i;
	int		lines;
	char	**map;

	i = 0;
	lines = count_lines(so_long);
	map = (char **)ft_calloc(sizeof(char *), lines + 1);
	if (!map)
		return (NULL);
	fd = open(*(so_long)->file, O_RDONLY);
	if (fd == -1)
	{
		free(map);
		return (NULL);
	}
	while (i < lines)
	{
		map[i] = get_next_line(fd);
		i++;
	}
	map[i] = NULL;
	close(fd);
	return (map);
}

int	count_lines(t_solong *so_long)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	line = NULL;
	fd = open(*(so_long)->file, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("Error: couldnt open the file \n");
		return (-1);
	}
	line = get_next_line(fd);
	while (line)
	{
		i++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (i);
}

int	count_rows(t_solong *so_long)
{
	int	rows;

	rows = 0;
	if (!so_long->map)
		exit(1);
	while (so_long->map[rows] != NULL)
	{
		rows++;
	}
	return (rows);
}

int	count_cols(t_solong *so_long)
{
	int	cols;
	int	i;
	int	first_line;
	int	rows;
	int	last_line;

	cols = 0;
	i = 0;
	first_line = (ft_strlen(so_long->map[i]) - 1);
	rows = count_rows(so_long);
	last_line = (ft_strlen(so_long->map[rows - 1]));
	while (so_long->map[i] != so_long->map[rows - 1])
	{
		cols = 0;
		while (so_long->map[i][cols] != '\n')
		{
			cols++;
		}
		if (cols < first_line || cols > first_line)
			return (-1);
		i++;
	}
	if (first_line != last_line)
		return (-1);
	return (first_line);
}

int	count_columns(t_solong *so_long)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (so_long->map[i] != NULL)
	{
		j = 0;
		while (so_long->map[i][j] != '\0')
		{
			j++;
		}
		return (j);
	}
	return (j);
}
