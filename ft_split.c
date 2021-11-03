/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:01:30 by 0xNino           #+#    #+#             */
/*   Updated: 2021/11/03 14:01:32 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcount(char const *s, char c)
{
	size_t	count;
	int		in_substr;

	count = 0;
	in_substr = 0;
	while (*s)
	{
		if (in_substr == 1 && *s == c)
			in_substr = 0;
		if (in_substr == 0 && *s != c)
		{
			in_substr = 1;
			count++;
		}
		s++;
	}
	return (count);
}

size_t	ft_substrlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		wordcount;
	int		index;

	index = 0;
	arr = (char **) malloc(sizeof(*arr) * (ft_strcount(s, c) + 1));
	if (!arr)
		return (NULL);
}


int	main(void)
{
	char	s[100];

	ft_strlcpy(s, "_1__2222_333___4_5555__66_7_88__99999___", 100);
	printf("strcount = %lu\n", ft_strcount(s, '_'));
	printf("splitlen = %lu\n", ft_substrlen(s + 4, '_'));
	return (0);
}
