/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 12:25:45 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 12:42:58 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_max(t_list *list)
{
	int		i;

	i = 0;
	list->max = list->stk_a[0];
	while (++i < (int)list->size)
		if (list->max < list->stk_a[i])
			list->max = list->stk_a[i];
}
