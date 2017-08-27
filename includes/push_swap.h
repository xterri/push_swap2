/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:07:47 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 19:22:19 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft.h"

typedef struct	s_list
{
	int				zero;
	int				a_ind;
	int				b_ind;
	int				min;
	int				max;
	int				tmp;
	int				*stk_a;
	int				*stk_b;
	size_t			size;
	size_t			nb_op;
}					t_list;

typedef struct		s_oper
{
	char			*oper;
	struct s_oper	*next;
}					t_oper;

/*
** GENERAL HELPER FUNCTIONS
*/
void				ft_lstdel(t_oper **alst);
void				ft_printstrlist(t_oper **lst);

/*
** OUTPUTS ERROR MESSAGES
*/
void				error(int n, t_list *list);

/*
** INITIAL CHECKS FOR CHECKER PROGRAM
*/
int					check_val(char *str);
int					check_dup(int *arr, int size, int val);
int					check_oper(char *s);

/*
** OPERAND / INSTRUCTIONS FUNCTION
*/
void				push_a(t_list *list);
void				push_b(t_list *list);
void				swap(int *arr);
void				rotate(int *arr, int size);
void				rev_rotate(int *arr, int size);
void				swap_both(t_list *list);
void				rotate_both(t_list *list);
void				rev_rotate_both(t_list *list);

/*
** CHECKER FUNCTIONS
*/
int					get_oper(t_list *list);
void				do_oper(t_list *list, int nb);
int					check_output(t_list *list);

/*
** PUSH_SWAP FUNCTIONS
*/
void				find_min(t_list *list);
void				find_max(t_list *list);
void				merge_sortish(t_list *list, t_oper *op_list);

#endif
