/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:16:48 by mlavergn          #+#    #+#             */
/*   Updated: 2024/11/14 14:46:13 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_ptr(unsigned long nbr)
{
	char	hex[17];
	int		count;

	count = 0;
	ft_strlcpy(hex, "0123456789abcdef", 17);
	if (nbr <= 15)
		count += ft_putchar(hex[nbr]);
	else
	{
		count += ft_putnbr_hex_ptr(nbr / 16);
		count += ft_putnbr_hex_ptr(nbr % 16);
	}
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	value;
	int				count;

	value = (unsigned long)ptr;
	count = 0;
	if (value == 0)
		//return (count += ft_putstr("0x0"));	//Macos
		//return (count += ft_putstr("(nil)")); //Linux
	count += ft_putstr("0x");
	count += ft_putnbr_hex_ptr(value);
	return (count);
}
