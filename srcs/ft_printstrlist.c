/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstrlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 09:38:32 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 16:46:48 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printstrlist(t_oper **lst)
{
	t_oper	*trav;
	
	if (!lst || !(*lst))
		return ;
	trav = *lst;
	while (trav->next)
	{
		ft_putstr((char *)trav->oper);
		trav = trav->next;
	}
	if (trav->oper)
		ft_putstr((char *)trav->oper);
}
