/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_oper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 19:52:40 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/24 12:27:27 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_oper(t_list *list, int nb)

	if (nb == 1)
		swap(list->stk_a);
	else if (nb == 2)
		swap(list->stk_b);
	else if (nb == 3)
		swap_both(list);
	else if (nb == 4)
		push_a(list);
	else if (nb == 5)
		push_b(list);	
	else if (nb == 6)
		rotate(list->stk_a, list->a_ind);
	else if (nb == 7)
		rotate(list->stk_b, list->b_ind - 1);
	else if (nb == 8)
		rotate_both(list);
	else if (nb == 9)
		rev_rotate(list->stk_a, list->a_ind + 1);
	else if (nb == 10)
		rev_rotate(list->stk_b, list->b_ind);
	else if (nb == 11)
		rev_rotate_both(list);
}
