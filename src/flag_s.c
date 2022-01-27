/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:42:27 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 18:54:32 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flag_s(va_list lst)
{
	int		count;
	char	s;

	s = va_arg(lst, char *);
	if (!s)
		count += ft_putstr("(null)");
	else
		count += ft_putstr(s);
	return (count);
}
