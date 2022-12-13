/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_print.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:46:20 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/13 03:20:37 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_putnbr_print(int n, int *write_check)
{
	int				count;
	unsigned int	nb;

	count = 0;
	if (n < 0)
	{
		if (ft_putchar_print('-') == -1)
			return (-1);
		nb = (unsigned int)(n * -1);
		count++;
	}
	else
		nb = (unsigned int) n;
	if (nb > 9)
		count += ft_putnbr_print(nb / 10, write_check);
	if (*write_check == -1)
		return (-1);
	*write_check = ft_putchar_print(nb % 10 + '0');
	count += *write_check;
	return (count);
}
