/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 18:33:16 by sle-guil          #+#    #+#             */
/*   Updated: 2015/04/09 18:57:44 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_str(char const **table, char const *patern)
{
	char	*new;
	char	*tmp;
	int		i;

	i = 1;
	if (!(*table))
		return (NULL);
	new = ft_strdup(*table);
	while (table[i])
	{
		tmp = new;
		new = ft_strjoin(new, patern);
		free(tmp);
		tmp = new;
		new = ft_strjoin(new, table[i++]);
		free(tmp);
	}
	return (new);
}
