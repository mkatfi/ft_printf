/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:49:38 by mkatfi            #+#    #+#             */
/*   Updated: 2023/01/13 23:58:55 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hixa(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_hixa(n / 16);
	i += write(1, &"0123456789abcdef"[n % 16], 1);
	return (i);
}

int	ft_putptr(unsigned long n)
{
	int	l;

	l = ft_putstr("0x");
	l += ft_hixa(n);
	return (l);
}
