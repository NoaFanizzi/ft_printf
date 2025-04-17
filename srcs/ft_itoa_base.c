/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:41:01 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/19 10:59:04 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_division(int n, int base)
{
	int	length;

	length = 1;
	while (n >= base)
	{
		n = n / base;
		length++;
	}
	return (length);
}

static char	*ft_putnbr_base(char *str, int nb, int length, int sign)
{
	char	*array_base;
	int		base;

	array_base = "0123456789";
	base = 10;
	if (sign < 0)
	{
		str[0] = '-';
		length++;
		sign = -sign;
	}
	if (nb >= base)
		ft_putnbr_base(str, nb / base, length - 1, sign);
	str[length - 1] = array_base[nb % base];
	return (str);
}

char	*ft_itoa_base(int n, int base)
{
	int		s;
	size_t	length;
	char	*str;

	s = 1;
	length = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		s = -s;
		n = -n;
		length++;
	}
	if (n == 0)
		return (ft_strdup("0"));
	length = ft_check_division(n, base);
	if (s < 0)
		str = ft_calloc(length + 2, sizeof(char));
	if (s > 0)
		str = ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	return (str = ft_putnbr_base(str, n, length, s));
}
