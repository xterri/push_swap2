/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:56:46 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/23 20:46:51 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

long	ft_atol(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_pop(int *arr, int *tmp, int *index);
void	ft_push(int *arr, int val, int *index);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_swap(int *a, int *b);

#endif
