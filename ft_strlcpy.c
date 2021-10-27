/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:51:38 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/27 14:51:40 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*src_start;

	src_start = src;
	if (dstsize > 1)
	{
		while (*src && dstsize > 1)
		{
			*dst++ = *src++;
			dstsize--;
		}
	}
	if (dstsize >= 1)
		*dst = '\0';
	while (*src)
		src++;
	return (src - src_start);
}
/*
int	main(void)
{
	char			dst[] = "yo";
	char			dest2[] = "yo";
	char			src[] = "salut";
	unsigned int	n = 3;

	printf("%s\n", dst);
	ft_strlcpy(dst, src, n);
	strlcpy(dest2, src, n);
	printf("%s\n", dst);
	printf("%s\n", dest2);
	printf("%lu\n", ft_strlcpy(dst, src, n));
}
*/
