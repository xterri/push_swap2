/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 12:25:06 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/24 12:26:08 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_both(t_list *list)
{
	rev_rotate(list->stk_a, list->a_ind + 1);
	rev_rotate(list->stk_b, list->b_ind);
}
