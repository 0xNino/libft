/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:24:34 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/28 18:24:36 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
}
*/