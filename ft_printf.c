#include	"ft_printf.h"

int	ft_print_format(int format, va_list args)

int	ft_printf(const char *format, ...)
{
	size_t	i;
	va_list	args;
	va_start(args, format);

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
				ft_print_format(format[i], args);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("%c", 'g');
}
