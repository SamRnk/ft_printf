#include	"ft_printf.h"

int	ft_putnbr_print(int n)
{
	int		count;
	unsigned int	nb;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar_print('-');
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int) n;
	if (nb > 9)
		count += ft_putnbr_print(nb / 10);
	count += ft_putchar_print(nb % 10 + '0');
	return (count);
}
