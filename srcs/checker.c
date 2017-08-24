/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:58:37 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/24 11:15:48 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int				i;
	long			val;
	static t_list	root;

	i = 0;
	ft_memset(&root, 0, sizeof(t_list));
	if (argc > 1)
	{
		root.size = argc - 1;
		if (!(root.stk_a = (int *)ft_memalloc(sizeof(int) * (argc))))
			error(4, &root);
		if (!(root.stk_b = (int *)ft_memalloc(sizeof(int) * (argc))))
			error(4, &root);
		while (++i < argc)
		{
			!(check_val(argv[i])) ? error(1, &root) : 0;
			val = ft_atol(argv[i]);
			val > 2147483647 || val < -2147483648 ? error(2, &root) : 0;
			!val ? root.zero++ : 0;
			root.zero > 1 ? error(3, &root) : 0;
			if (i > 1 && val)
				!(check_dup(root.stk_a, i, val)) ? error(3, &root) : 0;
			root.stk_a[i - 1] = val;
		}
		root.a_ind = root.size - 1;
		for (int j = 0; j < argc - 1; j++)
			printf("%d\n", root.stk_a[j]);
		get_oper(&root);
		puts("");
		for (int j = 0; root.a_ind > root.b_ind ? j <= root.a_ind : j <= root.b_ind; j++)
			printf("%d\t\t%d\n", root.stk_a[j], root.stk_b[j]);
		root.stk_a ? free(root.stk_a) : 0;
		root.stk_b ? free(root.stk_b) : 0;
	}
	else
		write(1, "Not enough arguments\n", 21);
	return (0);
}
