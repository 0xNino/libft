/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:44:07 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/26 16:44:09 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*ps;

	if (!dst && !src)
		return (NULL);
	pd = dst;
	ps = src;
	while (n--)
		*pd++ = *ps++;
	return (dst);
}
/*
int	main(void)
{
	char	src[5];
	char	dst[10];

	strcpy(src, "1234");
	strcpy(dst, "hf4zwyg4f");
	printf("%s\n", src);
	printf("%s\n", dst);
	ft_memcpy(dst, src, 3);
	printf("%s\n", dst);
}
*/