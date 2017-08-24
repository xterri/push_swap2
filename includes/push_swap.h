/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:07:47 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/23 19:46:02 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft.h"

# define BUFF_SIZE 5

typedef struct s_list
{
	int			zero;
	int			*stk_a;
	int			*stk_b;
}				t_list;

/*
** INITIAL CHECKS FOR CHECKER PROGRAM
*/
int				check_val(char *str);
int				check_dup(int *arr, int size, int val);
int				check_oper(char *s);

/*
** GET / PERFORM INSTRUCTIONS / OPERANDS (EX. SA, SB, etc.)
*/
int				get_oper(t_list *list);
void			do_oper(t_list *list, int nb);

/*
** OPERAND / INSTRUCTIONS FUNCTION
*/
void			swap_a(int *arr);
void			swap_b(int *arr);
void			swap_both(t_list *list);

/*
** OUTPUTS ERROR MESSAGES
*/
void			error(int n, t_list *list);

#endif
