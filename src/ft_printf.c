/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:53:15 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/04 22:44:33 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

size_t	ft_interpret(const char *str, va_list lst, int *i)
{
	int	count;

	count = 0;
	if (str[*i] == 'c')
		count = flag_c(lst);
	else if (str[*i] == 's')
		count = flag_s(lst);
	else if (str[*i] == 'p')
		count = flag_p(lst);
	else if (str[*i] == 'd' || str[*i] == 'i')
		count = flag_di(lst);
	else if (str[*i] == 'u')
		count = flag_u(lst);
	else if (str[*i] == 'x' || str[*i] == 'X')
		count = flag_x(lst, str[*i]);
	else if (str[*i] == '%')
		count = flag_pct();
	else
		return (-1);
	return (count);
}

int	ft_parse(va_list lst, const char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]) != NULL)
		{
			i++;
			count += ft_interpret(str, lst, &i);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		n;

	if (!str)
		return (-1);
	va_start(lst, str);
	n = ft_parse(lst, str);
	va_end(lst);
	return (n);
}
