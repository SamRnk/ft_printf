/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ptr_print.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 20:15:46 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/07 20:28:53 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_ptr_print(unsigned long n)
{
	write(1, "0x", 2);
	return ((ft_hex_print(n, "0123456789abcdef")) + 2);
}
