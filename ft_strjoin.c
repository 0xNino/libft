/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:57:10 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	dstsize;

	s3 = NULL;
	if (s1 && s2)
	{
		dstsize = ft_strlen(s1) + ft_strlen(s2) + 1;
		s3 = (char *)malloc(sizeof(char) * dstsize);
		if (!s3)
			return (NULL);
		ft_strlcpy(s3, s1, dstsize);
		ft_strlcat(s3, s2, dstsize);
	}
	return (s3);
}
