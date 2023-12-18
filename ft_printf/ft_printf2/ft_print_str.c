/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:47:05 by pestelle          #+#    #+#             */
/*   Updated: 2023/12/07 17:11:43 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(char *str, int *aux)
{
	if (!str)
		ft_print_str("(null)", aux);
	else
	{
		while (*str)
		{
			print_char(*str, aux);
			str++;
		}
	}
}
