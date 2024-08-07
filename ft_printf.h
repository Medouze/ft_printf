/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 23:36:42 by mlavergn          #+#    #+#             */
/*   Updated: 2024/08/07 16:59:22 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

// cc -Wall -Werror -Wextra -c ft_printf.c -o ft_printf.o
// cc -o test_program ft_printf.o -L. -lftprintf

int	ft_printf(const char *str, ...);
int	ft_putnbr_hex(char c, unsigned int n);
int	ft_putptr(void *ptr);
int	ft_putunsigned(unsigned int n);
int	ft_putnbr_hex_ptr(unsigned long nbr);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);

#endif