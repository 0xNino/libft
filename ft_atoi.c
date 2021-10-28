/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:57:40 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/28 18:57:44 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_isspace(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int static	signe(int neg, int i)
{
	if (neg % 2 == 0)
	{	
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	while (*str && (ft_isspace(*str)))
	{
		str++;
	}
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
		{
			neg++;
		}
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		i = i * 10 + (int) *str - '0';
		str++;
	}
	return (signe(neg, i));
}
