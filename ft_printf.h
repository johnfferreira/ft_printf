/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:28:48 by joferrei          #+#    #+#             */
/*   Updated: 2025/07/04 12:28:50 by joferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdarg.h>
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<stdint.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_adrress(void *generic);
int		ft_to_hexadecimal(int n, char x);
int		ft_putnbr_unsigned(unsigned int n);
char	*ft_itoa(int n);

#endif
