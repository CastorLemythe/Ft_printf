/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:03:03 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/17 14:51:42 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

static int		ft_nbrlen_base(int n, int base, int *neg)
{
	int		len;

	*neg = 0;
	len = 0;
	if (n <= 0)
	{
		n = -n;
		*neg = 1;
	}
	while (n != 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

char			*ft_itoa_base(int n, int base)
{
	char	*dest;
	int		neg;
	int		i;

	i = ft_nbrlen_base(n, base, &neg);
	if ((dest = (char *)malloc(sizeof(*dest) * (i + 1 + neg))) == NULL);
		return (NULL);
	dest[i + neg] = '\0';
	i--;
	if (neg)
	{
		dest[0] = '-';
		n = -n;
		i--;
	}
	while (i >= 0)
	{
		dest[i + neg] = n % base + '0';
		n = n / base;
		i--;
	}
	return (dest);
}
