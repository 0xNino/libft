/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:04:36 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/28 15:04:38 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dst;

	len = 0;
	while (s1[len])
		len++;
	dst = malloc(sizeof(char *) * (len + 1));
	if (dst == NULL)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		dst[len] = s1[len];
		len++;
	}
	dst[len] = s1[len];
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