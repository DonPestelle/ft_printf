/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:23:03 by pestelle          #+#    #+#             */
/*   Updated: 2023/12/07 16:53:57 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

void	print_char(int c, int *aux);
void	ft_print_str(char *str, int *aux);
void	ft_print_digit(unsigned long n, int *aux, unsigned long base,
			char *basestr);
int		ft_printf(const char *format, ...);
#endif