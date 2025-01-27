/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexa_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 07:57:45 by jcoquet           #+#    #+#             */
/*   Updated: 2024/03/07 10:17:25 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrhexa_pf(unsigned int nb, size_t *len)
{
	unsigned long int	nb2;

	nb2 = nb;
	if (nb2 > 15)
		ft_putnbrhexa_pf(nb2 / 16, len);
	ft_putchar_pf("0123456789abcdef"[nb2 % 16], len);
}

void	ft_putnbrhexa_uppercase_pf(unsigned int nb, size_t *len)
{
	unsigned long int	nb2;

	nb2 = nb;
	if (nb2 > 15)
		ft_putnbrhexa_uppercase_pf(nb2 / 16, len);
	ft_putchar_pf("0123456789ABCDEF"[nb2 % 16], len);
}
