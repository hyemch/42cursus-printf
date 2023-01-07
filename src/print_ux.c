/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:33:29 by hyecheon          #+#    #+#             */
/*   Updated: 2022/10/16 20:06:40 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

int	print_ux(unsigned int num, const char *format)
{
	int		len;
	int		base_len;
	char	*base;

	base = NULL;
	len = 0;
	if (*format == 'u')
		base = "0123456789";
	else if (*format == 'x')
		base = "0123456789abcdef";
	else if (*format == 'X')
		base = "0123456789ABCDEF";
	base_len = ft_strlen(base);
	if (num >= (unsigned int)base_len)
		len += print_ux((num / base_len), format);
	len += write(1, &base[num % base_len], 1);
	return (len);
}
