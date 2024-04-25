/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 01:30:32 by istripol          #+#    #+#             */
/*   Updated: 2024/04/25 00:32:10 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_int(int n)
{
	long	nb;
	int		cpt;

	cpt = 1;
	nb = n;
	if (n < 0 && n > MIN_INT)
	{
		n = -nb;
		cpt++;
	}
	while (nb > 9)
	{
		nb /= 10;
		cpt++;
	}
	ft_putnbr_fd(n, 1);
	return (cpt);
}
