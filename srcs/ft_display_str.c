/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:58:05 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/13 09:25:46 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_print_str(char *params)
{
	if (!params)
		return (ft_putstr_fd("(null)", 1), 6);
	ft_putstr_fd(params, 1);
	return (ft_strlen(params));
}
