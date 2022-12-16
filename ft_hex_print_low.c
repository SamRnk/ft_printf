/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex_print_low.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/16 23:25:44 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/16 23:29:23 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_hex_print_low(unsigned long n, int *write_check)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n > 15)
		count += ft_hex_print_low(n / 16, write_check);
	if (*write_check == -1)
		return (-1);
	*write_check = ft_putchar_print(symbols[n % 16]);
	count += *write_check;
	return (count);
}
