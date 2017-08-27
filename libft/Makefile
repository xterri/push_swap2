# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thuynh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 18:12:49 by thuynh            #+#    #+#              #
#*   Updated: 2017/08/26 19:32:53 by thuynh           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = ./srcs/

OBJDIR = ./objs/

FILES = ft_atol ft_bzero ft_isdigit ft_memalloc ft_strcmp ft_swap ft_memset \
		ft_push ft_pop ft_putchar ft_putstr ft_putendl ft_strnew ft_strcpy \
		get_next_line ft_strjoin ft_strsub ft_strchr ft_strdup ft_strcat \
		ft_strlen

SRCS = $(patsubst %, %.c, $(FILES))

OBJ = $(addprefix $(OBJDIR), $(SRCS:.c=.o))

INCLUDES = -I ./includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

objs:
	@mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c | objs
	@gcc $(FLAGS) $(INCLUDES) -o $@ -c $^

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
