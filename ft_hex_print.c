/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex_print.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:46:47 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/13 03:48:22 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_hex_print(unsigned long n, char const *symbols, int *write_check)
{
	int	count;

	count = 0;
	if (n > 15)
		count += ft_hex_print(n / 16, symbols, write_check);
	if (*write_check == -1)
		return (-1);
	*write_check = ft_putchar_print(symbols[n % 16]);
	count += *write_check;
	return (count);
}
