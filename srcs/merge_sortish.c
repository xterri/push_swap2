/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sortish.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 16:57:15 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 18:05:18 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	merge_sortish(t_list *list, t_oper *op_list)
{
	int		i;
	int		n;
	t_oper	*trav;
	
	find_min(list);
	find_max(list);
	i = -1;
	trav = op_list;
	n = list->size / 2;
	while (++i < n)
	{
		if (trav->oper)
		{
			if (!(trav->next = (t_oper *)ft_memalloc(sizeof(t_oper))))
				error(4, list);
			trav = trav->next;
		}
		if (!(trav->oper = ft_strnew(BUFF_SIZE)))
			error(4, list);
		if (list->stk_a[0] != list->min)
		{
			ft_strcpy(trav->oper, "pb\n");
			push_b(list);
			list->nb_op++;
		}
		else
		{
			ft_strcpy(trav->oper, "ra\n");
			rotate(list->stk_a, list->a_ind);
			list->nb_op++;
			n++;
		}

	}
	while (!check_output(list))
	{
		if (list->stk_a[0] == list->max && list->stk_a[1] != list->min && !list->b_ind)
		{
			if (trav->oper)
			{
				if (!(trav->next = (t_oper *)ft_memalloc(sizeof(t_oper))))
					error(4, list);
				trav = trav->next;
			}
			if (!(trav->oper = ft_strnew(BUFF_SIZE)))
				error(4, list);	
			ft_strcpy(trav->oper, "pb\n");
			push_b(list);
			list->nb_op++;
		}
		if (list->stk_a[0] > list->stk_a[1] && list->stk_a[0] != list->max && list->stk_a[1] != list->min)
		{
			if (trav->oper)
			{
				if (!(trav->next = (t_oper *)ft_memalloc(sizeof(t_oper))))
					error(4, list);
				trav = trav->next;
			}
			if (!(trav->oper = ft_strnew(BUFF_SIZE)))
				error(4, list);
			ft_strcpy(trav->oper, "sa\n");
			swap(list->stk_a);
			list->nb_op++;
		}
		if (list->stk_a[0] == list->min && list->stk_b[0] == list->max)
		{
			if (trav->oper)
			{
				if (!(trav->next = (t_oper *)ft_memalloc(sizeof(t_oper))))
					error(4, list);
				trav = trav->next;
			}
			if (!(trav->oper = ft_strnew(BUFF_SIZE)))
				error(4, list);
			ft_strcpy(trav->oper, "pa\n");
			push_a(list);
			list->nb_op++;
		}
		while (list->stk_a[0] > list->stk_b[0] && list->b_ind)
		{
			if (trav->oper)
			{
				if (!(trav->next = (t_oper *)ft_memalloc(sizeof(t_oper))))
					error(4, list);
				trav = trav->next;
			}
			if (!(trav->oper = ft_strnew(BUFF_SIZE)))
				error(4, list);
			ft_strcpy(trav->oper, "pa\n");
			push_a(list);
			list->nb_op++;
		}
		if (trav->oper)
		{
			if (!(trav->next = (t_oper *)ft_memalloc(sizeof(t_oper))))
				error(4, list);
			trav = trav->next;
		}
		if (!(trav->oper = ft_strnew(BUFF_SIZE)))
			error(4, list);
		ft_strcpy(trav->oper, "ra\n");
		rotate(list->stk_a, list->a_ind);
		list->nb_op++;
	}
}
