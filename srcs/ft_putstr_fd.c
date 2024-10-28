#include "ft_printf.h"

size_t	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (ft_putstr_fd("(null)", 1));
	while (s && s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}