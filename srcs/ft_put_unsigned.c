/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:40:25 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/23 16:56:19 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_unsigned(unsigned int n)
{
	size_t	len;
	char	*nbr;

	if (n == 0)
		return (ft_putchar_fd('0', 1));
	nbr = ft_itoa(n);
	len = ft_putstr_fd(nbr, 1);
	free(nbr);
	return (len);
}