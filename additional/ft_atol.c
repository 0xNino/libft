/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:02:25 by 0xNino            #+#    #+#             */
/*   Updated: 2022/02/15 23:02:46 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

long	ft_atol(const char *str)
{
	long	nbr;
	int		minus;

	nbr = 0;
	minus = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			minus = 1;
	while (ft_isdigit(*str))
	{
		if ((nbr > (FT_LONG_MAX - *str + '0') / 10) && minus)
			return (0);
		if ((nbr > (FT_LONG_MAX - *str + '0') / 10) && !minus)
			return (-1);
		nbr = 10 * nbr + (*str - '0');
		str++;
	}
	if (minus)
		return (-nbr);
	return (nbr);
}
