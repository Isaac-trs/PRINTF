/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:34:28 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 18:19:19 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	cpt;

	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	cpt = (int)ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (cpt);
}
