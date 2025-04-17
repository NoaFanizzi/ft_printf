/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:16:07 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/13 10:34:10 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static size_t	ft_check_params(const char *str, va_list args, int i)
{
	size_t	length;

	length = 0;
	if (str[i + 1] == '%')
		length += ft_print_char(str[i]);
	if (str[i + 1] == 's')
		length += ft_print_str(va_arg(args, char *));
	if (str[i + 1] == 'c')
		length += ft_print_char(va_arg(args, int));
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		length += ft_print_number(va_arg(args, int));
	if (str[i + 1] == 'u')
		length += ft_print_u_number(va_arg(args, unsigned int), str[i + 1]);
	if (str[i + 1] == 'x' || str[i + 1] == 'X')
		length += ft_print_hexa(va_arg(args, unsigned int), str[i + 1]);
	if (str[i + 1] == 'p')
		length += ft_print_ptr(va_arg(args, void *));
	return (length - 2);
}

size_t	ft_parse(const char *str, va_list args)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_check_params(str, args, i);
			if (str[i + 1] == '\0')
				return (length + i);
			i++;
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	return (length + i);
}
