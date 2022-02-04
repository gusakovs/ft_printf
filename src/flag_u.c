/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:55:32 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/04 22:45:25 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_u(va_list lst)
{
	unsigned int	n;

	n = va_arg(lst, unsigned int);
	return (ft_putnbr_base(n, "0123456789"));
}
