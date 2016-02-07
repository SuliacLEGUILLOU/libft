/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabsort_qui.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 15:00:39 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/26 21:29:21 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	st_switch(int *i, int *j)
{
	int		tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

int		st_getpivot(int *t, size_t max)
{
	int			ret;
	size_t		i;

	//i = 0;
	//while (i++ < max)
	//	ret = (ret * i - 1) + t[i] / i;
	return (0);
}

void	ft_tabsort_qui(int *tab, size_t max, int (*f)(int, int))
{
	int		begin;
	int		end;
	int		pivot;

	begin = 0;
	end = max;
	pivot = st_getpivot(tab, max);
	while (begin < end)
	{
		while (!(f(tab[pivot], tab[end])))
			end--;
		while (!(f(tab[begin], tab[pivot])))
			begin++;
		if (begin < end)
			st_switch(tab + begin, tab + end);
	}
	if (max > 4)
	{
		ft_tabsort_qui(tab, end, f);
		ft_tabsort_qui(tab + end + 1, max, f);
	}
	else
		ft_tabsort_bub(tab, 0, end, f);
}
