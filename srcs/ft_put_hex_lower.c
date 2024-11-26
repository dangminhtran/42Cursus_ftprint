/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:39:15 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/22 19:07:36 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

void	ft_put_hex_lower(unsigned int n)
{
	if (n >= 16)
	{
		ft_put_hex_lower(n / 16);
		ft_put_hex_lower(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', 1);
		else
			ft_putchar_fd(n - 10 + 'a', 1);
	}
}

// int main ()
// {
// 	int nbr = 789565;
// 	ft_put_hex_lower(nbr);
// 	return (0);
// } 
