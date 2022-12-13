/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 19:45:42 by sreerink      #+#    #+#                 */
/*   Updated: 2022/12/13 04:11:22 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);

int		ft_putchar_print(char c);

int		ft_putnbr_print(int n, int *write_check);

size_t	ft_strlen(const char *s);

int		ft_putstr_print(char *s);

int		ft_putunbr_print(unsigned int n, int *write_check);

int		ft_hex_print(unsigned long n, char const *symbols, int *write_check);

int		ft_isfprint(const char c);

int		ft_ptr_print(unsigned long n, int *write_check);

#endif
