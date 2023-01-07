/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:32:30 by hyecheon          #+#    #+#             */
/*   Updated: 2022/10/16 20:04:38 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	print_di(int num)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789";
	if (num == -2147483648)
	{
		len = write(1, "-2147483648", 11);
		return (len);
	}
	else if (num < 0)
	{
		len += write(1, "-", 1);
		num *= -1;
	}
	if (num > 9)
		len += print_di(num / 10);
	len += write(1, &base[num % 10], 1);
	return (len);
}
