/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:46:15 by mkatfi            #+#    #+#             */
/*   Updated: 2023/01/10 21:49:26 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_unsigned(unsigned int n);
int	ft_printf(const char *str, ...);
int	ft_hexa(unsigned int n, char m);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long n);
int	ft_putnbr(int n);

#endif
