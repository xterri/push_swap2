/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_oper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 18:36:26 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 20:00:36 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_oper(t_list *list)
{
	int		ret;
	int		op_nb;
	char	*str;

	for (int i = 0; list->a_ind > list->b_ind ? i <= list->a_ind : i <= list->b_ind; i++)
		printf("%d\t\t%d\n", list->stk_a[i], list->stk_b[i]);
	puts("");
	while ((ret = get_next_line(0, &str)))
	{
		if (!ft_strlen(str))
			break ;
		!(op_nb = check_oper(str)) ? error(5, list) : 0;
		do_oper(list, op_nb);
		puts("stk_a\t\tstk_b");
		for (int i = 0; list->a_ind > list->b_ind ? i <= list->a_ind : i <= list->b_ind; i++)
			printf("%d\t\t%d\n", list->stk_a[i], list->stk_b[i]);
		puts("");
		free(str);
		str = NULL;
	}
	free(str);
	return (1);
}
