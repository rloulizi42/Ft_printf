/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 14:44:55 by rloulizi          #+#    #+#             */
/*   Updated: 2017/09/19 14:46:38 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strrev(char *str)
{
	char	swap;
	int		b;
	int		c;

	b = 0;
	c = ft_strlen(str) - 1;
	while (b < c)
	{
		swap = str[b];
		str[b] = str[c];
		str[c] = swap;
		b++;
		c--;
	}
	return (str);
}
