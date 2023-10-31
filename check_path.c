/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:57:21 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/20 17:13:12 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_path(char **map, int i, int j)
{
	if (map[i][j] == '1' || map[i][j] == 'X' || map[i][j] == 'S')
		return ;
	if (map[i][j] == 'E')
	{
		map[i][j] = 'S';
	}
	else
		map[i][j] = 'X';
	check_path(map, i - 1, j);
	check_path(map, i + 1, j);
	check_path(map, i, j - 1);
	check_path(map, i, j + 1);
}

void	flood_fill(t_solong *so_long)
{
	char	**dup_map;
	int		i;
	int		j;

	i = 0;
	dup_map = duplicate_map(so_long);
	if (!dup_map)
		exit(1);
	while (so_long->map[i] != NULL)
	{
		j = 0;
		while (dup_map[i][j] != '\0')
		{
			if (dup_map[i][j] == 'P')
			{
				check_path(dup_map, i, j);
				verify_path(dup_map);
				free_copy_map(dup_map);
				return ;
			}
			j++;
		}
		i++;
	}
	free_copy_map(dup_map);
}

char	**duplicate_map(t_solong *so_long)
{
	int		i;
	char	**dup_map;
	int		lines;

	lines = count_rows(so_long);
	dup_map = (char **)ft_calloc(sizeof(char *), (lines + 1));
	if (!dup_map)
		return (NULL);
	i = 0;
	while (so_long->map[i] != NULL)
	{
		dup_map[i] = ft_strdup(so_long->map[i]);
		if (!dup_map[i])
		{
			free_copy_map(dup_map);
			return (NULL);
		}
		i++;
	}
	dup_map[i] = NULL;
	return (dup_map);
}

int	error(char **map, int flag)
{
	int	i;

	if (flag == 1)
	{
		i = 0;
		ft_printf("Error: invalid path.\n");
		while (map[i] != NULL)
		{
			free(map[i]);
			i++;
		}
		free(map);
		exit(1);
	}
	else
		return (0);
}

void	verify_path(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] == 'E' || map[i][j] == 'C')
				error(map, 1);
			j++;
		}
		i++;
	}
	error(map, 0);
}
