/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:43:00 by lufranco          #+#    #+#             */
/*   Updated: 2018/08/13 16:30:08 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "FT_PRINTF_H"
# define "FT_PRINTF_H"

typedef	struct	s_case
{
	int		opt;
	int		fld;
	int		acc;
	int		mod;
	int		conv;
	int		i;
	int		ret;
	va_list	ap;
}				t_case

#endif
