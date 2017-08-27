/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:56:46 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 19:44:00 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define BUFF_SIZE 4096

typedef struct		s_line
{
	char			*str;
	char			*tmp;
	int				fd;
	int				size;
	struct s_line	*next;
}					t_line;

int					get_next_line(const int fd, char **line);
long				ft_atol(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isdigit(int c);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *s, int c, size_t n);
void				ft_pop(int *arr, int *tmp, int *index);
void				ft_push(int *arr, int val, int *index);
void				ft_putchar(char c);
void				ft_putendl(char const *s);
void				ft_putstr(char const *s);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(const char *s);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				ft_swap(int *a, int *b);

#endif
