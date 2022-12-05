#include	"ft_printf.h"

int	ft_putunbr_print(unsigned int n)
{
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putunbr_print(n / 10);
	count += ft_putchar_print(n % 10 + '0');
	return (count);
}
