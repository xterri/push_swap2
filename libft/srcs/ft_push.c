/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:38:35 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/23 21:46:33 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_push(int *arr, int val, int *index)
{
	int		i;

	i = *index;
	while (i > 0)
	{
		ft_swap(&arr[i], &arr[i - 1]);
		i--;
	}
	arr[i] = val;
	*index += 1;
}
