/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:30:54 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/23 15:33:24 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int n, t_list *list)
{
	if (!list)
		write(1, "list null\n", 10);
	if (n == 1)
		write(2, "Not an int\n", 11);
	else if (n == 2)
		write(2, "Not a valid int value\n", 22);
	else if (n == 3)
		write(2, "Duplicate value found\n", 22);
	else if (n == 4)
		write(2, "Not enough memory\n", 18);
	else if (n == 5)
		write(2, "Invalid operand\n", 16);
	list->stk_a ? free(list->stk_a) : 0;
	list->stk_b ? free(list->stk_b) : 0;
	exit(0);
}
