/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:42:27 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/04 22:44:39 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_s(va_list lst)
{
	int		count;
	char	*s;

	count = 0;
	s = va_arg(lst, char *);
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		count += 6;
	}
	else
	{
		ft_putstr_fd(s, 1);
		count += ft_strlen(s);
	}
	return (count);
}
