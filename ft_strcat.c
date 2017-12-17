/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 12:45:32 by rloulizi          #+#    #+#             */
/*   Updated: 2017/09/19 15:04:53 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (dst);
}
