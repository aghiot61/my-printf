/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:23:12 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/20 14:32:23 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../lib/ft_printf.h"

static void	to_char(unsigned int n, int arg)
{
	const char	*alpha_upp = "0123456789ABCDEF";
	const char	*alpha_low = "0123456789abcdef";

	if (arg == 'X')
		write(1, &alpha_upp[n], 1);
	else if (arg == 'x')
		write(1, &alpha_low[n], 1);
}

int	ft_puthex(unsigned int d, int arg)
{
	int	r;
	int	i;

	r = d % 16;
	if (d - r == 0)
	{
		to_char(r, arg);
		i++;
	}
	else
		ft_puthex((d - r) / 16, arg);
	if (d - r != 0)
		to_char(r, arg);
	i++;
	return (i);
}
