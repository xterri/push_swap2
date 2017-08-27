/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 12:23:10 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 12:42:48 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min(t_list *list)
{
	int		i;

	i = 0;
	list->min = list->stk_a[0];
	while (++i < (int)list->size)
		if (list->min > list->stk_a[i])
			list->min = list->stk_a[i];
}
