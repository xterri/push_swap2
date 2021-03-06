#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/08/22 08:16:21 by thuynh            #+#    #+#             *#
#*   Updated: 2017/08/26 14:12:44 by thuynh           ###   ########.fr       *#
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

FILES = ft_printstrlist ft_lstdel \
		check_val check_dup check_oper \
		swap swap_both \
		push_a push_b \
		rotate rotate_both \
		rev_rotate rev_rotate_both \
		get_oper do_oper check_output \
		error \
		find_min find_max \
		merge_sortish

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

push_swap: re $(NAME)
	@gcc $(FLAGS) $(INCLUDES) $(NAME) srcs/push_swap.c -o push_swap
