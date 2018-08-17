/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:03:03 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/17 13:50:14 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_neg_itoa(char *dest, int index, unsigned int n)
{
	n = -n;
	while (index > 0)
	{
		dest[index - 1] = n % 10 + '0';
		n = n / 10;
		index--;
	}
	dest[0] = '-';
}

char			*ft_itoa(int n)
{
	char	*dest;
	int		index;

	index = ft_nbrlen(n);
	dest = (char *)malloc(sizeof(*dest) * (index + 1));
	if (dest == NULL)
		return (NULL);
	dest[index] = '\0';
	if (n < 0)
		ft_neg_itoa(dest, index, n);
	else
	{
		while (index > 0)
		{
			dest[index - 1] = n % 10 + '0';
			n = n / 10;
			index--;
		}
	}
	return (dest);
}
