#include	"ft_print.h"

void	ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-');
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int) n;
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
