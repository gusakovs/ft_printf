/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:12:58 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/04 22:47:38 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_p(va_list lst)
{
	void	*n;

	n = va_arg(lst, void *);
	ft_putstr_fd("0x", 1);
	return (ft_putnbr_base((unsigned long long)n, "0123456789abcdef") + 2);
}
