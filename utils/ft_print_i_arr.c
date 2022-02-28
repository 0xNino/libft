/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:12:30 by 0xNino            #+#    #+#             */
/*   Updated: 2022/02/28 15:11:06 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_print_i_arr(int *i_arr, int size)
{
	int	i;

	i = 0;
	write (1, "arr : ", 6);
	while (i < size)
	{
		ft_printf("[%i]", i_arr[i]);
		if (i < size - 1)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}
