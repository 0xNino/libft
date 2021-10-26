/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:46:11 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/26 13:46:13 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ptr;

	if (!b)
		return (NULL);
	ptr = b;
	while (len--)
		*(unsigned char *) ptr++ = (unsigned char) c;
	return (b);
}
/*
int	main(void)
{
	char	arr[10];

	strcpy(arr, "123456789");
	printf("%s\n", arr);
	ft_memset(arr, '$', 4);
	printf("%s\n", arr);
}
*/