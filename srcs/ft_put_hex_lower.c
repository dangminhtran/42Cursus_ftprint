#include "ft_printf.h"

void	ft_put_hex_lower(unsigned int nbr)
{
	if (nbr >= 16)
	{
		ft_put_hex_lower(nbr / 16);
		ft_put_hex_lower(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd(nbr + '0', 1);
		else
			ft_putchar_fd(nbr - 10 + 'a', 1);
	}
}