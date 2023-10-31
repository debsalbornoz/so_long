CC = gcc
CFLAGS = -g3 -Wall -Wextra -Werror
MLXFLAGS = -lmlx -lXext -lX11

SRCS = catch_events.c create_images.c end_game.c game_elements.c move_player.c read_map.c so_long.c check.c find.c verify_map.c check_wall.c initialize_variables.c check_path.c check_collectible.c
OBJ = $(SRCS:.c=.o)
NAME = so_long
LIBFT_DIR = ./libft

all: $(NAME)

$(NAME): $(LIBFT_DIR)/libft.a $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft $(MLXFLAGS) -o $@

$(LIBFT_DIR)/libft.a:
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ) $(NAME)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f libft.a

re: fclean all