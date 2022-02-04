/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:53:11 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/04 22:44:29 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_di(va_list lst)
{
	long long	n;
	int			neg;

	n = va_arg(lst, int);
	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg++;
		ft_putchar('-');
	}
	return (ft_putnbr_base(n, "0123456789") + neg);
}
