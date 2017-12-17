/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:04:21 by rloulizi          #+#    #+#             */
/*   Updated: 2017/09/20 15:31:31 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	char	a;
	int		i;

	a = c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			return ((char*)str + i);
		i++;
	}
	if (a == str[i])
		return ((char*)str + i);
	return (NULL);
}
