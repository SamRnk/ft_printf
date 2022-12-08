/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_print.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:46:20 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/08 22:36:59 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_putnbr_print(int n)
{
	int				count;
	int				write_check;
	unsigned int	nb;

	count = 0;
	write_check = 0;
	if (n < 0)
	{
		write_check = ft_putchar_print('-');
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int) n;
	if (nb > 9)
		count += ft_putnbr_print(nb / 10);
	count += ft_putchar_print(nb % 10 + '0');
	return (count);
}
