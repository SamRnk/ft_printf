/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putunbr_print.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:46:33 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/13 03:23:34 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_putunbr_print(unsigned int n, int *write_check)
{
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putunbr_print(n / 10, write_check);
	if (*write_check == -1)
		return (-1);
	*write_check = ft_putchar_print(n % 10 + '0');
	count += *write_check;
	return (count);
}
