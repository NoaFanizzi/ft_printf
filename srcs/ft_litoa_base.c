/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:41:01 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/19 10:59:35 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long int	ft_check_division(unsigned long int n,
		unsigned long int base)
{
	unsigned long int	length;

	length = 1;
	while (n >= base)
	{
		n = n / base;
		length++;
	}
	return (length);
}

static char	*ft_putnbr_base_16(char *str, unsigned long nb,
		unsigned long length, int sign)
{
	char	*array_base;
	size_t	base;

	array_base = "0123456789ABCDEF";
	base = 16;
	if (sign < 0)
	{
		str[0] = '-';
		length++;
		sign = -sign;
	}
	if (nb >= base)
		ft_putnbr_base_16(str, nb / base, length - 1, sign);
	str[length - 1] = array_base[nb % base];
	return (str);
}

static char	*ft_putnbr_base_10(char *str, unsigned long nb,
		unsigned long length, int sign)
{
	char	*array_base;
	size_t	base;

	array_base = "0123456789";
	base = 10;
	if (sign < 0)
	{
		str[0] = '-';
		length++;
		sign = -sign;
	}
	if (nb >= base)
		ft_putnbr_base_10(str, nb / base, length - 1, sign);
	str[length - 1] = array_base[nb % base];
	return (str);
}

char	*ft_litoa_base(unsigned long n, unsigned long base)
{
	unsigned long int	s;
	size_t				length;
	char				*str;

	s = 1;
	length = 0;
	if (n == 0)
		return (ft_strdup("0"));
	length = ft_check_division(n, base);
	str = ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (base == 16)
		return (str = ft_putnbr_base_16(str, n, length, s));
	else
		return (str = ft_putnbr_base_10(str, n, length, s));
}
