/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:08:21 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/23 17:00:30 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_format(va_list args, char c, size_t *len)
{
	if (c == 'c')
		*len += ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		*len += ft_putfd(va_arg(args, char *), 1);
	else if (c == 'd' || c == 'i')
		*len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'u')
		*len += ft_put_unsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		*len = 0;
	else if (c == 'x')
		*len += ft_put_hex_lower(va_arg(args, unsigned int));
	else if (c == 'X')
		*len += ft_put_hex_upper(va_arg(args, unsigned int));
	else if (c == '%')
		*len += ft_putchar_fd('%', 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	len;
	size_t	i;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_format(args, format[i + 1], &len);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}