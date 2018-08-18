/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:03:03 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/18 10:33:32 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*dest;
	int		neg;
	int		i;

	neg = 0;
	i = ft_nbrlen(n);
	dest = (char *)malloc(sizeof(*dest) * (i + 1));
	if (dest == NULL)
		return (NULL);
	dest[i] = '\0';
	i--;
	if (n < 0)
	{
		dest[0] = '-';
		neg = 1;
		n = -n;
		i--;
	}
	while (i >= 0)
	{
		dest[i + neg] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (dest);
}
