/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:13:57 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/17 13:26:13 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		main(void)
{
	int h = -421;
	char *s = "bijour";
	char c;

	c = 'a';
	ft_putnbr(ft_printf("variable = %d et %c et %s\n", h, 65, s));
	write(1, "\n\n", 2);
	ft_putnbr(printf("variable = %d et %C et %s\n", h, 65, s));
	write(1, "\n", 1);
//	while (1);
	return (0);
}
