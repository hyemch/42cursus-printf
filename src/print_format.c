/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:09:25 by hyecheon          #+#    #+#             */
/*   Updated: 2022/10/16 20:04:31 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	print_format(va_list *ap, const char *format)
{
	int	len;

	if (*format == 'c')
		len = print_char(va_arg(*ap, int));
	else if (*format == 's')
		len = print_str(va_arg(*ap, char *));
	else if (*format == 'd' || *format == 'i')
		len = print_di(va_arg(*ap, int));
	else if (*format == 'u' || *format == 'X' || *format == 'x')
		len = print_ux(va_arg(*ap, unsigned int), format);
	else if (*format == '%')
		len = write(1, "%", 1);
	else if (*format == 'p')
	{
		len = write(1, "0x", 2);
		len += print_ptr(va_arg(*ap, unsigned long));
	}
	else
		return (-1);
	return (len);
}
