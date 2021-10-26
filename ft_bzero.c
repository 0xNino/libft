/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:14:35 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/26 15:14:37 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, 0, n);
	}
}
/*
int	main(void)
{
	char	arr[10];
	int		i;

	i = 0;
	strcpy(arr, "123456789");
	printf("%s\n", arr);
	ft_bzero(arr, 5);
	while (i <= 5)
	{
		printf("#%s\n", arr + i);
		i++;
	}
}
*/