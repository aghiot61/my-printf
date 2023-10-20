/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:21:55 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/20 14:28:59 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../lib/ft_printf.h"

int	ft_putunsnbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
		i++;
	}
	else
	{
		ft_putunsnbr(nb / 10);
		ft_putunsnbr(nb % 10);
	}
	return (i);
}
