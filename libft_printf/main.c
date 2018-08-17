/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <lufranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:53:47 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/17 14:38:55 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

char			*ft_itoa_base(int n, int base);

int main(void)
{
	printf("itoa base = %s\n", ft_itoa_base(-42, 4));
	return (0);
}
