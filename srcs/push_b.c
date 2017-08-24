/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:01:58 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/23 22:14:53 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list *list)
{
	if ((list->a_ind < 0) || !list->stk_b)
		return ;
	ft_pop(list->stk_a, &list->tmp, &list->a_ind);
	ft_push(list->stk_b, list->tmp, &list->b_ind);
}
