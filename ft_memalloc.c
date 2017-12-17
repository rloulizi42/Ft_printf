/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:27:21 by rloulizi          #+#    #+#             */
/*   Updated: 2017/09/19 14:42:52 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memalloc(size_t size)
{
	void *zone;

	zone = NULL;
	if (!(zone = malloc(size)))
		return (NULL);
	ft_memset(zone, 0, size);
	return (zone);
}
