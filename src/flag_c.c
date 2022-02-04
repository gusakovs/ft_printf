/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:35:30 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/04 22:44:43 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_c(va_list lst)
{
	char	c;
	int		count;

	count = 0;
	c = va_arg(lst, int);
	ft_putchar(c);
	count ++;
	return (count);
}
