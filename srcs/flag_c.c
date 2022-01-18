/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:35:30 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 16:01:23 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flag_c(va_list lst)
{
	unsigned char	c;

	c = va_arg(lst, unsigned char);
	return (ft_putchar(c, 1));
}
