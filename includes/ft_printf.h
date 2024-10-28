#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

size_t	ft_putchar_fd(char c, int fd);
size_t	ft_putstr_fd(char *s, int fd);
size_t	ft_putnbr_fd(int n, int fd);
void	ft_put_hex_lower(unsigned int nbr);
void	ft_put_hex_upper(unsigned int nbr)

#endif 