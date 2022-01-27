/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:53:11 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 18:45:48 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flag_di(va_list lst)
{
	int	count;

	count = ft_putnbr(va_arg(lst, int), 1);
	return (count);
}
