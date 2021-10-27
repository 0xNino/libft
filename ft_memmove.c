/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:25:18 by ngenoud           #+#    #+#             */
/*   Updated: 2021/10/26 17:25:20 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		dst += len;
		while (src < src + len--)
		{
			*(unsigned char *)--dst = *(unsigned char *)--src;
		}
	}
	else
		while (len--)
			*(unsigned char *) dst++ = *(unsigned char *) src++;
	return (dst);
}

int	main(void)
{
	char	str[100] = "Learningisfun";
	char	*first, *second;

	first = str;
	second = str;
	printf("Original string :%s\n ", str);
	memcpy(first + 8, first, 10);
	printf("memcpy overlap : %s\n ", str);
	ft_memmove(second + 8, first, 10);
	printf("ft_memmove overlap : %s\n ", str);
	return (0);
}
