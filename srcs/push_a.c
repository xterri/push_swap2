/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:01:58 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/23 22:19:34 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list *list)
{
	if ((list->b_ind < 0) || !list->stk_b)
		return ;
	ft_pop(list->stk_b, &list->tmp, &list->b_ind);
	ft_push(list->stk_a, list->tmp, &list->a_ind);
}
