/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:32:43 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:13:14 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_iter(char *str, int n, int pow)
{
	str[pow] = '\0';
	while (pow > 0)
	{
		pow--;
		str[pow] = '0' + n % 10;
		n /= 10;
	}
}

char			*ft_itoa(int n)
{
	int		pow;
	int		signe;
	char	*new;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
	{
		new = ft_strdup("0");
		return (new);
	}
	signe = ft_getsigne(&n);
	pow = ft_getpow(n);
	if (signe == -1 && (new = (char*)malloc(sizeof(char) * (pow + 2))))
	{
		new[0] = '-';
		ft_iter(new + 1, n, pow);
	}
	else if (signe == 1 && (new = (char*)malloc(sizeof(char) * (pow + 1))))
		ft_iter(new, n, pow);
	return (new);
}
