/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:01:02 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 18:45:13 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flag_x(va_list lst, char c)
{
	unsigned int	n;

	n = va_list(lst, unsigned int);
	if (c == 'n')
		return (ft_putnbr_base(n, "0123456789abcdef"));
	else if (c == 'N')
		return (ft_putnbr_base(n, "0123456789ABCDEF"));
}
