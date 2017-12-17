/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:38:28 by rloulizi          #+#    #+#             */
/*   Updated: 2017/09/19 14:51:01 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_word_number(char *str, char c)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			nb++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (nb);
}
