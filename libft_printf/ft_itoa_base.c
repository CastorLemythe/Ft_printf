/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:03:03 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/17 13:59:44 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static	int		nbrlen(size_t n, int base)
{
	unsigned int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

static void		ft_neg_itoa(char *dest, int index, unsigned int n, int base)
{
	n = -n;
	while (index > 0)
	{
		dest[index - 1] = n % base + '0';
		n = n / base;
		index--;
	}
	dest[0] = '-';
}

char			*ft_itoa_base(int n, int base)
{
	char	*dest;
	int		index;

	index = nbrlen(n, base);
	dest = (char *)malloc(sizeof(*dest) * (index + 1));
	if (dest == NULL)
		return (NULL);
	dest[index] = '\0';
	if (n < 0)
		ft_neg_itoa(dest, index, n, base);
	else
	{
		while (index > 0)
		{
			dest[index - 1] = n % base + '0';
			n = n / base;
			index--;
		}
	}
	return (dest);
}
