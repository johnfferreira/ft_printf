/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:21:51 by joferrei          #+#    #+#             */
/*   Updated: 2025/07/04 11:21:52 by joferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	number_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	init_var(int *dglen, long *value, int n)
{
	*dglen = number_len(n);
	*value = n;
}

char	*ft_itoa(int n)
{
	int		dg_len;
	char	*to_ascii;
	long	value;
	int		i;

	init_var(&dg_len, &value, n);
	to_ascii = malloc((dg_len + 1) * sizeof(char));
	if (!to_ascii)
		return (NULL);
	to_ascii[dg_len] = '\0';
	if (n < 0)
	{
		value = -value;
		to_ascii[0] = '-';
	}
	if (n == 0)
		return (to_ascii[0] = '0', to_ascii);
	i = dg_len - 1;
	while (value > 0)
	{
		to_ascii[i] = (value % 10) + '0';
		value = value / 10;
		i--;
	}
	return (to_ascii);
}
