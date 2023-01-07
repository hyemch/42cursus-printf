/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:27:58 by hyecheon          #+#    #+#             */
/*   Updated: 2022/10/14 20:48:52 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	check_format(va_list *ap, const char *format)
{
	int	ret;

	ret = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			ret += print_format(ap, ++format);
		else
			ret += write(1, format, 1);
		format++;
	}
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int		ret;
	va_list	ap;

	if (!format)
		return (-1);
	va_start(ap, format);
	ret = check_format(&ap, format);
	va_end(ap);
	return (ret);
}
