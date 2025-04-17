/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:05:44 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/19 10:48:26 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		length;

	va_start(args, str);
	length = ft_parse(str, args);
	return (length);
}

/*int	main(void)
{
	printf("%d", ft_printf("%"));
	printf("%d", printf("%"));
}*/
