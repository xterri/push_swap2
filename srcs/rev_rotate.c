/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 12:10:19 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/24 12:23:59 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(int *arr, int size)
{
	int		i;
	int		tmp;

	i = size - 1;
	tmp = arr[size - 1];
	while (i-- > 0)
		ft_swap(&arr[i], &arr[i + 1]);
	arr[0] = tmp;
}
