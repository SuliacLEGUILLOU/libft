/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isallow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:14:42 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/06 15:28:45 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isallow(int c)
{
	if (c == '/' || c == '\\' || c == '#' || c == '&' || c == '*' || c == '%')
		return (0);
	return (1);
}
