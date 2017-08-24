#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/08/22 08:16:21 by thuynh            #+#    #+#             *#
#*   Updated: 2017/08/23 19:46:13 by thuynh           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = pushswap.a 
#make library of functions needed, after make necessary programs?

LIB_HEADER = -I ./libft/includes/

LIB = libft/libft.a

LIBFT_O = libft/objs/*.o 
#ok to use the wildcard?

INCLUDES = -I ./includes/

INCLUDES += $(LIB_HEADER)

OBJDIR = ./objs/

SRCDIR = ./srcs/

FILES = check_val check_dup check_oper \
		swap_a swap_b swap_both \
		get_oper do_oper \
		error

SRCS = $(patsubst %, %.c, $(FILES))

OBJS = $(addprefix $(OBJDIR), $(SRCS:.c=.o))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_O)
	@ar rcs $(NAME) $(OBJS) $(LIBFT_O)

objs:
	@mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c | objs
	@gcc $(FLAGS) $(INCLUDES) -o $@ -c $^

$(LIBFT_O):
	@make re -C libft

clean:
	@make clean -C libft
	@rm -rf $(OBJDIR)

fclean: clean
	@make fclean -C libft
	@rm -rf $(NAME)

re: fclean all

checker: re $(NAME)
	@gcc $(FLAGS) $(INCLUDES) $(NAME) srcs/checker.c -o checker
