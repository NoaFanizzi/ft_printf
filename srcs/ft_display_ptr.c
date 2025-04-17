/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:00:35 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/19 10:37:57 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_print_ptr(void *ptr)
{
	unsigned long long int	nb;
	char					*str;
	size_t					length;

	nb = (unsigned long)ptr;
	if (nb == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	str = ft_litoa_base(nb, 16);
	if (!nb)
		return (-1);
	ft_putstr_fd("0x", 1);
	str = ft_tolower_str(str);
	ft_putstr_fd(str, 1);
	length = ft_strlen(str);
	free(str);
	return (length + 2);
}
