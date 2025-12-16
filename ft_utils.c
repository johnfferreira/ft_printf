/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:15:10 by joferrei          #+#    #+#             */
/*   Updated: 2025/07/03 16:15:11 by joferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	to_hex_to_hexa(unsigned int addr, char flags)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789ABCDEF";
	if (flags == 'x')
		hex = "0123456789abcdef";
	if (addr >= 16)
		i += to_hex_to_hexa(addr / 16, flags);
	i += ft_putchar(hex[addr % 16]);
	return (i);
}

static int	to_hex_adrress(uintptr_t addr, char flags)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789ABCDEF";
	if (flags == 'x')
		hex = "0123456789abcdef";
	if (addr >= 16)
		i += to_hex_adrress(addr / 16, flags);
	i += ft_putchar(hex[addr % 16]);
	return (i);
}

int	ft_adrress(void *generic)
{
	int	i;

	i = 0;
	if (!generic)
	{
		i = ft_putstr("(nil)");
		return (i);
	}
	i = ft_putstr("0x");
	i += to_hex_adrress((uintptr_t)generic, 'x');
	return (i);
}

int	ft_to_hexadecimal(int n, char x)
{
	int	i;

	i = 0;
	i += to_hex_to_hexa((unsigned int) n, x);
	return (i);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
		i += ft_putnbr_unsigned(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}
