/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:29:26 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/23 16:58:37 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex_upper(unsigned int nbr)
{
	if (nbr >= 16)
	{
		ft_put_hex_upper(nbr / 16);
		ft_put_hex_upper(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd(nbr + '0', 1);
		else
			ft_put_hex_upper(nbr - 10 + 'A');
	}
}
