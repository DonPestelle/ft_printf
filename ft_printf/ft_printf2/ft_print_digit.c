/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:22:01 by pestelle          #+#    #+#             */
/*   Updated: 2023/12/07 17:24:06 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_digit(unsigned long n, int *aux, unsigned long base,
		char *basestr)
{
	if ((int)n < 0 && basestr[10] == '\0')
	{
		print_char('-', aux);
		n = -n;
	}
	else if (n >= base)
		ft_print_digit(n / base, aux, base, basestr);
	else if (*aux == -1)
		return ;
	print_char(basestr[n % base], aux);
}
