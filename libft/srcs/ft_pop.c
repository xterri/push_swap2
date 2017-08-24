/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:44:35 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/24 10:58:13 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_pop(int *arr, int *tmp, int *index)
{
	int		i;

	i = 0;
	*tmp = arr[0];
	while (i < *index)
	{
		ft_swap(&arr[i], &arr[i + 1]);
		i++;
	}
	arr[i] = 0;
	*index -= 1;
}
