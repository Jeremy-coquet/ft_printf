/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:22:38 by jcoquet           #+#    #+#             */
/*   Updated: 2024/03/07 10:21:06 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar_pf(char c, size_t *len);
void	ft_putnbr_pf(int nb, size_t *len);
void	ft_putnbr_unsigned_pf(unsigned int nb, size_t *len);
void	ft_putnbrhexa_pf(unsigned int nb, size_t *len);
void	ft_putnbrhexa_uppercase_pf(unsigned int nb, size_t *len);
void	ft_putptr_pf(void *ptr, size_t *len);
void	ft_putstr_pf(char *str, size_t *len);
int		ft_printf(const char *str, ...);
#endif