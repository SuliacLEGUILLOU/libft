/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/30 17:54:10 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/25 17:22:51 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(int c)
{
	int hex;

	hex = c & 0xf;
	if (hex < 10)
		ft_putchar('0' + hex);
	else
		ft_putchar('a' + hex - 10);
}
