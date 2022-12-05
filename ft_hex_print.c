#include	"ft_printf.h"

int	ft_hex_print(unsigned long n, char const *symbols)
{
	int	count;

	count = 0;
	if (n > 15)
		count += ft_hex_print(n / 16, symbols);
	count += ft_putchar_print(symbols[n % 16]);
	return (count);
}
