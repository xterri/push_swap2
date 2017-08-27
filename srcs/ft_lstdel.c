/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:37:17 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/26 15:58:14 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdel(t_oper **alst)
{
	if (!alst || !*alst)
		return ;
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next);
	(*alst)->oper ? free((*alst)->oper) : 0;
	free(*alst);
	*alst = NULL;
}
