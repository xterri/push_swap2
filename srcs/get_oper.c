/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_oper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 18:36:26 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/23 19:43:02 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_oper(t_list *list)
{
	int		ret;
	int		op_nb;
	char	buff[BUFF_SIZE];

	while ((ret = read (0, &buff, BUFF_SIZE)))
	{
		buff[ret - 1] = '\0';
		if (ret < 3 || ret > 4)
		{
			buff[0] ? error(5, list) : 0;
			return (0);
		}
		!(op_nb = check_oper(buff)) ? error(5, list) : 0;
		do_oper(list, op_nb);
	}
	if (!ret)
		return (0);
	return (1);
}
