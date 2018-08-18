/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <lufranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 10:48:16 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/18 11:23:34 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_putc(int c)
{
	if (c >= 10)
		return (c - 10 + 'A');
	else
		return (c + 48);
}

char	*ft_itoa_base(int value, int base)
{
	int				n;
	char			*ptr;
	unsigned int	value1;
	unsigned int	tmp;

	n = 0;
	if (value < 0 && base == 10)
		n++;
	value1 = (value < 0) ? -value : value;
	tmp = value1;
	value = 0;
	while (tmp >= (unsigned int)base && ++value >= 0)
		tmp = tmp / base;
	if ((ptr = (char*)malloc(sizeof(ptr) * (value + n + 1))) == NULL)
		return (NULL);
	ptr[value + n + 1] = '\0';
	ptr[0] = '-';
	while (value >= 0)
	{
		tmp = value1 % base;
		ptr[value + n] = ft_putc(tmp);
		value1 = value1 / base;
		value--;
	}
	return (ptr);
}
