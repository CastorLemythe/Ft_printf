/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <lufranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:24:49 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/18 12:43:49 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//sSpdDioOuUxXcC
//s S p d i o u x X c C		D U
//S p o u x X	D U

/*	stk.i++;
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
	}*/

void	init(t_case *stk)
{
	stk.opt = 0;
	stk->field = 0;
	stk.acc = 0;
	stk.mod = 0;
}

void	ft_check_var(const char *s, t_case *stk, int i)
{
	init(stk);
	if (s[i] == 45 || s[i] == 43 || s[i] == 35 || s[i] == 32)
		stk->opt = s[i++];
	if (s[i] => '0' && s[i] =< '9')
	{
		stk->fld = ft_atoi(s + i);
		i += ft_nbrlen(stk->fld);
	}
	if (s[i] == '.')
	{
		i++;
		stk->acc = ft_atoi(s + i);
		i += ft_nbrlen(stk->acc);
	}
	if (s[i] == 'h' || s[i] == 'l' || s[i] == 'j' || s[i] == 'z')
	{
		if (s[i] == 'j')
			stk->mod = 5;
		if (s[i] == 'z')	
			stk->mod = 6;
		if (s[i] == 'h')
			stk->mod = (s[i + 1] == 'h') ? 2 : 1;
		if (s[i] == 'l')
			stk->mod = (s[i + 1] == 'l') ? 4 : 3;
		if (stk->mod == 2 || stk->mod == 4)
			i++;
		i++;
	}
	stk->conv = s[i];
}

int		ft_printf(const char *str, ...)
{
	t_case	stk;

	stk.i = -1;
	stk.ret = 0;
	init(&stk);
	va_start(stk.ap, str);
	while (str[++stk.i] != '\0')
	{
		if (str[stk.i] == '%')
			ft_check_var(str, &stk, stk.i + 1);
		else
		{
			write(1, &str[stk.i], 1);
			stk.ret++;
		}
	}
	va_end(stk.ap);
	return (stk.ret);
}
