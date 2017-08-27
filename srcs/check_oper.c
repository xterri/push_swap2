/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 19:04:29 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 19:35:00 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_oper(char *s)
{
	if (!ft_strcmp(s, "sa"))
		return (1);
	if (!ft_strcmp(s, "sb"))
		return (2);
	if (!ft_strcmp(s, "ss"))
		return (3);
	if (!ft_strcmp(s, "pa"))
		return (4);
	if (!ft_strcmp(s, "pb"))
		return (5);
	if (!ft_strcmp(s, "ra"))
		return (6);
	if (!ft_strcmp(s, "rb"))
		return (7);
	if (!ft_strcmp(s, "rr"))
		return (8);
	if (!ft_strcmp(s, "rra"))
		return (9);
	if (!ft_strcmp(s, "rrb"))
		return (10);
	if (!ft_strcmp(s, "rrr"))
		return (11);
	return (0);
}
