/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:25:18 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/26 17:25:20 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = dst;
	ps = src;
	if (!pd || !ps)
		return (NULL);
	if (pd < ps)
	{
		pd += len;
		while (len--)
			*--pd = *--ps;
	}
	else
		while (len--)
			*pd++ = *ps++;
	return (dst);
}
/*
int	main(void)
{
	char	str[100] = "Learningisfun";
	char	*first, *second;

	first = str;
	second = str;
	printf("Original string : %s\n ", str);
	memcpy(first + 8, first, 10);
	printf("memcpy overlap : %s\n ", str);
	ft_memmove(second + 8, first, 10);
	printf("ft_memmove overlap : %s\n ", str);
	return (0);
}
*/