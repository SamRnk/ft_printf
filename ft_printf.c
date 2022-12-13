/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:45:20 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/13 04:23:14 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static int	ft_print_format(const char format, va_list args)
{
	int	count;
	int	write_check;

	count = 0;
	write_check = 0;
	if (format == 'c')
		count = ft_putchar_print(va_arg(args, int));
	if (format == 's')
		count = ft_putstr_print(va_arg(args, char *));
	if (format == 'i' || format == 'd')
		count = ft_putnbr_print(va_arg(args, int), &write_check);
	if (format == 'u')
		count = ft_putunbr_print(va_arg(args, unsigned int), &write_check);
	if (format == 'x')
		count = ft_hex_print(va_arg(args, unsigned int), "0123456789abcdef", &write_check);
	if (format == 'X')
		count = ft_hex_print(va_arg(args, unsigned int), "0123456789ABCDEF", &write_check);
	if (format == 'p')
		count = ft_ptr_print(va_arg(args, unsigned long), &write_check);
	if (format == '%')
		count = ft_putchar_print('%');
	if (write_check == -1)
		return (-1);
	return (count);
}

static int	ft_format_loop(const char *format, va_list args)
{
	size_t	i;
	int		write_check;
	int		count;

	i = 0;
	count = 0;
	while (format[i])
	{
		write_check = 0;
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (ft_isfprint(format[i]))
				write_check = ft_print_format(format[i], args);
			else
				write_check = ft_putchar_print(format[i]);
		}
		else if (format[i] && format[i] != '%')
			write_check = ft_putchar_print(format[i]);
		if (write_check == -1)
			return (-1);
		count += write_check;
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	if (format)
		count = ft_format_loop(format, args);
	va_end(args);
	return (count);
}
/*
#include	<stdio.h>

int	main(void)
{
	ft_printf("%i\n", ft_printf("sgwgrwegergerger%s", NULL));
	printf("%i\n", printf("sgwgrwegergerger%s", NULL));
}*/
