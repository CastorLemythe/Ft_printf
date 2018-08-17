/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <lufranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:24:49 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/17 13:26:53 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//sSpdDioOuUxXcC
//s S p d i o u x X c C		D U
//S p o u x X	D U

#include "../includes/ft_printf.h"

void	ft_skip(const char *s, t_case *stk)
{
	while (s[stk->i] != '\0' && s[stk->i] != ' ' && s[stk->i] != '	' &&
			s[stk->i] != '\n')
		stk->i++;
	stk->i--;
}

void	stk_init(t_case *stk)
{
	stk->i = -1;	
	stk->ret = 0;	
}

int		ft_printf(const char *str, ...)
{
	t_case	stk;

	stk_init(&stk);
	va_start(stk.ap, str);
	while (str[++stk.i] != '\0')
	{
		if (str[stk.i] == '%')
		{
			stk.i++;
			if (str[stk.i] == 'd' || str[stk.i] == 'i')
			{
				stk.tmp_i = va_arg(stk.ap, int);
				ft_putnbr(stk.tmp_i);
				stk.tmp = ft_itoa(stk.tmp_i);
				stk.ret += ft_strlen(stk.tmp);
				free(stk.tmp);
			}
			if (str[stk.i] == 'c' || str[stk.i] == 'C')
			{
				ft_putchar(va_arg(stk.ap, int));
				stk.ret++;
			}
			if (str[stk.i] == 's')
			{
				stk.tmp = ft_strdup(va_arg(stk.ap, char*));
				ft_putstr(stk.tmp);
				stk.ret += ft_strlen(stk.tmp);
				free(stk.tmp);
			}
			if (str[stk.i] == '%')
			{
				write(1, &str[stk.i], 1);
				stk.ret++;
			}
			ft_skip(str, &stk);
		}
		else
		{
			write(1, &str[stk.i], 1);
			stk.ret++;
		}
	}
	va_end(stk.ap);
	return (stk.ret);
}
