/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:13:57 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/13 16:30:06 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft/libft.h"

int		main(void)
{
	char *i;
	int a;
	int h = 42;

	i = malloc(h);
	for (a = 0; a != h; a++)
		i[a] = 'i';
	i[a] = '\0';
	printf(" --- return == %d\n", printf("%42s\n", i));
	return (0);
}
