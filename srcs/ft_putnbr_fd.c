#include "ft_printf.h"

size_t	ft_nbr_len(unsigned int nbr)
{
	size_t	len;

	len = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

size_t	ft_putnbr_fd(int n, int fd)
{
	size_t	len;
	char	*nbr;

// creer le ft_itoa
	nbr = ft_itoa(n);
	len = ft_putstr_fd(nbr, fd);
	free(nbr);
	return (len);
}