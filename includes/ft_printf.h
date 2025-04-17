/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:41:16 by nofanizz          #+#    #+#             */
/*   Updated: 2025/03/20 11:00:33 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 3;
#endif

int		ft_printf(const char *str, ...);
size_t	ft_parse(const char *str, va_list args);
char	*ft_itoa_base(int n, int base);
char	*ft_tolower_str(char *str);
int		ft_is_lower(char c);
int		ft_is_upper(char c);
char	*ft_toupper_str(char *str);
int		ft_toupper(int c);
char	*ft_litoa_base(unsigned long n, unsigned long long base);
size_t	ft_print_char(int c);
size_t	ft_print_hexa(unsigned int nb, char c);
size_t	ft_print_number(int nb);
size_t	ft_print_ptr(void *ptr);
size_t	ft_print_str(char *params);
size_t	ft_print_u_number(unsigned int nb, char c);

#endif
