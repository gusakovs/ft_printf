/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:51:09 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/27 17:49:51 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int				ft_printf(const char *str, ...);
int				ft_parse(va_list lst, const char *str);
size_t			ft_interpret(const char *str, va_list lst, int *i);
int				flag_c(va_list lst);
int				flag_s(va_list lst);
int				flag_u(va_list lst);
int				flag_di(va_list lst);
int				flag_p(va_list lst);
int				flag_x(va_list lst, char c);
int				flag_pct(void);

#endif
