/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:30:30 by dlamark-          #+#    #+#             */
/*   Updated: 2023/08/23 20:26:22 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./libft/libft.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <X11/keysymdef.h>
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define WIDTH 800
# define HEIGHT 600
# define SIZE 50

typedef struct s_solong
{
	void		*mlx_ptr;
	void		*win_ptr;
	char		**map;
	void		*wall_img;
	void		*collectible_item_img;
	void		*player_img;
	void		*exit_img;
	void		*empty_space_img;
	int			x;
	int			y;
	const char	**file;
	int			num_moves;
	int			lines;
	int			columns;

}				t_solong;

enum e_keycodes
{
	ESC = 65307,
	A = 97,
	D = 100,
	W = 119,
	S = 115,
	LEFT = 65361,
	UP = 65362,
	RIGHT = 65363,
	DOWN = 65364
};

int				create_collectible_item(t_solong *so_long);
int				create_exit(t_solong *so_long);
int				create_player(t_solong *so_long);
int				create_wall(t_solong *so_long);
int				create_empty_space(t_solong *so_long);
void			create_images(t_solong *so_long);
void			render(t_solong *so_long);
char			**read_map(t_solong *so_long);
void			map_elements(t_solong *so_long);
int				count_lines(t_solong *so_long);
int				count_rows(t_solong *so_long);
int				count_cols(t_solong *so_long);
int				end_game(t_solong *so_long);
int				close_window(t_solong *so_long);
int				key_hook(int keycode, t_solong *so_long);
void			move_player_up(t_solong *so_long, int i, int j);
void			move_player_down(t_solong *so_long, int i, int j);
void			move_player_left(t_solong *so_long, int i, int j);
void			move_player_right(t_solong *so_long, int i, int j);
void			increment_moves(t_solong *so_long);
int				check(t_solong *so_long);
int				check_arguments(int argc);
int				check_elements(t_solong *so_long);
int				check_map_extension(char **argv);
int				find_exit(t_solong *so_long);
int				find_collectible(t_solong *so_long);
int				find_player(t_solong *so_long);
int				find_empty_space(t_solong *so_long);
int				check_wall(t_solong *so_long);
int				check_rectangular(t_solong *so_long);
int				first_line(t_solong *so_long);
int				last_line(t_solong *so_long);
int				first_column(t_solong *so_long);
int				last_column(t_solong *so_long);
int				check_size(t_solong *so_long);
void			initialize_variables(t_solong *so_long);
void			free_matrix(char **map);
void			flood_fill(t_solong *so_long);
char			**duplicate_map(t_solong *so_long);
int				count_columns(t_solong *so_long);
void			verify_path(char **map);
int				error(char **map, int flag);
void			free_copy_map(char **map);
void			check_path(char **map, int i, int j);
int				check_char(t_solong *so_long);
void			check_collectible_up(t_solong *so_long, int i, int j);
void			check_collectible_left(t_solong *so_long, int i, int j);
void			check_collectible_down(t_solong *so_long, int i, int j);
void			check_collectible_right(t_solong *so_long, int i, int j);

#endif