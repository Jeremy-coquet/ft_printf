/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:47:16 by jcoquet           #+#    #+#             */
/*   Updated: 2024/03/07 09:43:27 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *len)
{
	int		i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		ft_putchar_pf(str[i], len);
		i++;
	}
}
