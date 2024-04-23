/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 08:26:20 by istripol          #+#    #+#             */
/*   Updated: 2024/04/23 09:04:31 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "./Libft/libft.h"

# ifndef MIN_INT
#  define MIN_INT -2147483648
# endif

int		ft_printf(const char *string, ...);
int		print_char(char c);
int		print_string(char *str);
int		print_int(int n);
#endif
