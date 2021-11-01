/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:46:11 by ngenoud           #+#    #+#             */
/*   Updated: 2021/10/26 13:46:13 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*pb;

	pb = b;
	while (len--)
		*(unsigned char *) pb++ = (unsigned char) c;
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