/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:22:56 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/23 16:51:22 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>

size_t	ft_putchar_fd(char c, int fd);
size_t	ft_putnbr_fd(int n, int fd);
size_t	ft_putstr_fd(char *s, int fd);
size_t	ft_put_hex_lower(unsigned int n);
size_t	ft_put_hex_upper(unsigned int n);
size_t	ft_put_unsigned(unsigned int n);
char	*ft_itoa(int n);

#endif
