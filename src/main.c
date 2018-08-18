/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:13:57 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/18 12:36:40 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"
#include <stdio.h>

int		main(void)
{
	int h = 42;

//	ft_putnbr(ft_printf("variable = %d\n", h));
//	write(1, "\n\n", 2);
	ft_putnbr(printf("variable = %d\n", h));
	write(1, "\n", 1);
	return (0);
}
