/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:05:48 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 14:19:53 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_output(t_list *list)
{
	int		i;

	i = -1;
	if (list->stk_b[0] || list->stk_b[1])
		return (0);
	while (++i < (int)list->size - 1)
		if (list->stk_a[i] > list->stk_a[i + 1])
			return (0);
	return (1);
}
