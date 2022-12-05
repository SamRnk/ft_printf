#include	"ft_printf.h"
#include	<stdio.h>

int	ft_print_format(const char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar_print(va_arg(args, int));
	if (format == 's')
		count += ft_putstr_print(va_arg(args, char *));
	if (format == 'i' || format == 'd')
		count += ft_putnbr_print(va_arg(args, int));
	if (format == 'u')
		count += ft_putunbr_print(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int	count;
	va_list	args;
	va_start(args, format);

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
				count += ft_print_format(format[i], args);
		}
		i++;
	}
	return (count);
}

int	main(void)
{
	printf("\n%i", ft_printf("%u", 2147483647));
}
