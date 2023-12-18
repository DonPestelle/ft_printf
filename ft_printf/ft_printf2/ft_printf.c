/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:34:36 by pestelle          #+#    #+#             */
/*   Updated: 2023/12/07 17:17:07 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_format(const char *formato, va_list ap, int *aux)
{
	if (*formato == '%')
		print_char('%', aux);
	else if (*formato == 'c')
		print_char(va_arg(ap, int), aux);
	else if (*formato == 's')
		return (ft_print_str(va_arg(ap, char *), aux));
	else if (*formato == 'd' || *formato == 'i')
		ft_print_digit(va_arg(ap, int), aux, 10, "0123456789");
	else if (*formato == 'u')
		ft_print_digit(va_arg(ap, unsigned int), aux, 10, "0123456789u");
	else if (*formato == 'x')
		ft_print_digit(va_arg(ap, unsigned int), aux, 16, "0123456789abcdef");
	else if (*formato == 'X')
		ft_print_digit(va_arg(ap, unsigned int), aux, 16, "0123456789ABCDEF");
	else if (*formato == 'p')
	{
		ft_print_str("0x", aux);
		ft_print_digit(va_arg(ap, unsigned long), aux, 16, "0123456789abcdef");
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			print_format(++format, ap, &count);
		else
			print_char(*format, &count);
		++format;
	}
	va_end(ap);
	return (count);
}
