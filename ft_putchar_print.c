/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_print.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:46:59 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/12 18:33:27 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_putchar_print(char c)
{
	return (write(1, &c, 1));
}
