/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_pf.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 07:49:19 by jcoquet           #+#    #+#             */
/*   Updated: 2024/03/07 11:11:20 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned_pf(unsigned int nb, size_t *len)
{
	unsigned long int	nb2;

	nb2 = nb;
	if (nb2 > 9)
		ft_putnbr_unsigned_pf(nb2 / 10, len);
	ft_putchar_pf("0123456789"[nb2 % 10], len);
}
