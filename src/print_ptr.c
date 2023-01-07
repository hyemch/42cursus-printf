/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:35:41 by hyecheon          #+#    #+#             */
/*   Updated: 2022/10/16 20:04:25 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	print_ptr(unsigned long ptr)
{
	int		len;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (ptr > 15)
		len += print_ptr(ptr / 16);
	len += write(1, &base[ptr % 16], 1);
	return (len);
}
