/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:45:20 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/07 21:26:05 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

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
	if (format == 'x')
		count += ft_hex_print(va_arg(args, unsigned int), "0123456789abcdef");
	if (format == 'X')
		count += ft_hex_print(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (format == 'p')
		count += ft_ptr_print(va_arg(args, unsigned long));
	if (format == '%')
		count += ft_putchar_print('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		count;
	va_list	args;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (ft_isfprint(format[i]))
				count += ft_print_format(format[i], args);
			else
				count += ft_putchar_print(format[i]);
		}
		else if (format[i])
			count += ft_putchar_print(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
#include	<stdio.h>
#include	<limits.h>

int	main(void)
{
	ft_printf("%i\n", ft_printf(" %x ", LONG_MAX));
	printf("%i\n", printf(" %x ", LONG_MAX));
}*/
