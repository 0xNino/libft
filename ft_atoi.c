/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:57:40 by ngenoud           #+#    #+#             */
/*   Updated: 2021/10/28 18:57:44 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	sign;

	i = 0;
	neg = 0;
	sign = 0;
	while (*str && (ft_isspace(*str)))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			neg++;
		sign++;
		str++;
	}
	while ('0' <= *str && *str <= '9')
		i = i * 10 + (int) *str++ - '0';
	if (sign > 1)
		return (0);
	if (neg)
		return (i * -1);
	else
		return (i);
}
