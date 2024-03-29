/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:46:34 by mkatfi            #+#    #+#             */
/*   Updated: 2023/01/10 21:47:53 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_unsigned(n / 10);
	i += write(1, &"0123456789"[n % 10], 1);
	return (i);
}
