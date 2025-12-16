/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:00 by joferrei          #+#    #+#             */
/*   Updated: 2025/07/03 10:49:01 by joferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	aux_print(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr((va_arg(args, int))));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (ft_adrress(va_arg(args, void *)));
	else if (c == 'x')
		return (ft_to_hexadecimal(va_arg(args, unsigned int), 'x'));
	else if (c == 'X')
		return (ft_to_hexadecimal(va_arg(args, unsigned int), 'X'));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			i += aux_print(*format, args);
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	return (va_end(args), i);
}
