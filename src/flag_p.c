/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:12:58 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 18:44:31 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flag_p(va_list lst)
{
	void	*n;

	n = va_arg(lst, void *);
	ft_putstr("0x", 1);
	return (ft_putnbr_base((unsigned long long)n, "0123456789abcdef") + 2);
}
