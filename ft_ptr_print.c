/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ptr_print.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 20:15:46 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/13 03:36:44 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_ptr_print(unsigned long n, int *write_check)
{
	int	count;

	count = 0;
	if (write(1, "0x", 2) == -1)
		return (-1);
	count = ft_hex_print(n, "0123456789abcdef", write_check);
	if (count == -1)
		return (-1);
	return (count + 2);
}
