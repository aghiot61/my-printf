/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:42:06 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/20 14:34:31 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/libft.h"
#include "lib/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			result;

	i = 0;
	result = 0;
	va_start(ap, format);
	while (format[i])
	{
		if ((format[i] == '%')
			&& (ft_strchr("cspdiuxX%", format[i + 1])))
		{
			result += check_format(format, i, ap);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (result);
}
