/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:38:35 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/24 11:03:44 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_push(int *arr, int val, int *index)
{
	int		i;

	*index += 1;
	i = *index;
	while (i > 0)
	{
		ft_swap(&arr[i], &arr[i - 1]);
		i--;
	}
	arr[i] = val;
}
