/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:18:06 by mkatfi            #+#    #+#             */
/*   Updated: 2023/01/18 02:21:43 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char piece, va_list ptr)
{
	int i = 0;
	if (piece == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	else if (piece == 'd' || piece == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (piece == 's')
		i += ft_putstr(va_arg(ptr, char *));
	else if (piece == 'u')
		i += ft_unsigned(va_arg(ptr, unsigned int));
	else if (piece == 'x')
		i += ft_hexa(va_arg(ptr, unsigned int), 'x');
	else if (piece == 'X')
		i += ft_hexa(va_arg(ptr, unsigned int), 'X');
	else if (piece == 'p')
		i += ft_putptr(va_arg(ptr, unsigned long));
	else
		return (ft_putchar(piece));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		l;
	va_list	ptr;

	va_start(ptr, str);
	i = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			l += ft_check(str[i + 1], ptr);
			i += 2;
		}
		else if (str[i] == '%' && str[i + 1] == '%')
			l += write(1, &str[i + 1], 1);
		else
			l += ft_putchar(str[i++]);
	}
	va_end(ptr);
	return (l);
}
int	main(void)
{
	ft_printf("%u", 4294967295);
}