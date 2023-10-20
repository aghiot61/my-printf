/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:17:42 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/20 14:30:55 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	check_format(const char *arg, int i, va_list ap);
int	ft_putchar(char c);
int	ft_putunsnbr(unsigned int nb);
int	ft_puthex(unsigned int d, int arg);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);

#endif