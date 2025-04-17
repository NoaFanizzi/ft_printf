/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:58:46 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/19 10:37:42 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_print_number(int nb)
{
	char	*str;
	size_t	length;

	length = 0;
	str = ft_itoa_base(nb, 10);
	if (!str)
		return (-1);
	ft_putstr_fd(str, 1);
	length = ft_strlen(str);
	free(str);
	return (length);
}

size_t	ft_print_u_number(unsigned int nb, char c)
{
	char	*str;
	size_t	length;

	length = 0;
	c = 0;
	str = ft_litoa_base(nb, 10);
	if (!str)
		return (-1);
	ft_putstr_fd(str, 1);
	length = ft_strlen(str);
	free(str);
	return (length);
}
