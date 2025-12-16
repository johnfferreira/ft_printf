/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_util.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:02:06 by joferrei          #+#    #+#             */
/*   Updated: 2025/07/03 11:02:07 by joferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*to_asscii;
	int		i;

	i = 0;
	to_asscii = ft_itoa(n);
	i = ft_putstr(to_asscii);
	free(to_asscii);
	return (i);
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		s = "(null)" ;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
