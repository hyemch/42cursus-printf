/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyecheon <hyecheon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:21:35 by hyecheon          #+#    #+#             */
/*   Updated: 2022/10/16 20:04:43 by hyecheon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	check_format(va_list *ap, const char *format);
int	print_format(va_list *ap, const char *format);
int	ft_strlen(const char *s);
int	print_str(char *str);
int	print_char(int c);
int	num_len(int num);
int	print_di(int num);
int	print_ux(unsigned int num, const char *format);
int	print_ptr(unsigned long ptr);

#endif