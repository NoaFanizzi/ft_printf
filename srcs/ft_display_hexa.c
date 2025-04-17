/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:02:00 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/19 10:37:21 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_print_hexa(unsigned int nb, char c)
{
	char	*str;
	size_t	length;

	length = 0;
	str = ft_litoa_base(nb, 16);
	if (!str)
		return (-1);
	if (ft_is_lower(c) == 1)
		str = ft_tolower_str(str);
	if (ft_is_upper(c) == 1)
		str = ft_toupper_str(str);
	ft_putstr_fd(str, 1);
	length = ft_strlen(str);
	free(str);
	return (length);
}
