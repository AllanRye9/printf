/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:37:18 by oallan            #+#    #+#             */
/*   Updated: 2024/01/05 19:08:41 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define PTR_NULL "(nil)"
# include <stdio.h> 
# include <unistd.h> 
# include <stdarg.h> 
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_printf_char(int c);
int		ft_printf_str(char *str);
int		ft_printf_interger(long num, int base, int islower);
int		ft_printf_pointer(unsigned long long pointer, int pointer_prefix);
int		ft_printf_specifier(char specified, va_list ap);
int		ft_printf(const char *form, ...);
#endif
