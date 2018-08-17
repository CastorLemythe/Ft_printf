/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:43:00 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/17 13:26:26 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include "../libft/libft.h"

typedef	struct	s_case
{
	int		opt;
	int		fld;
	int		acc;
	int		mod;
	int		conv;
	int		i;
	int		ret;
	char	*tmp;
	int		tmp_i;
	va_list	ap;
}				t_case;

int				ft_printf(const char *str, ...);
#endif
