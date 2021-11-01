/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:04:36 by ngenoud           #+#    #+#             */
/*   Updated: 2021/10/28 15:04:38 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*dst;

	dst = (char *) malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		char *s1 = argv[1];
		char *dst = ft_strdup(s1);
		printf("%s\n", s1);
		printf("%s\n", dst);
	}
	return (0);
}
*/