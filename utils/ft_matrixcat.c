/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:13:34 by 0xNino            #+#    #+#             */
/*   Updated: 2022/05/06 03:18:15 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
/*
DESCRIPTION
The ft_matrixcat() function appends a copy of the null-terminated string str to
the end of the null-terminated matrix then add a terminating `\0'.

RETURN VALUES
The ft_matrixcat() function returns a pointer to the new matrix. If str is NULL
or memory allocations fail then the initial matrix is returned.
*/

char	**ft_matrixcat(char **matrix, char *str)
{
	int		i;
	int		len;
	char	**matrixcat;

	if (!str)
		return (matrix);
	i = -1;
	len = ft_matrixlen(matrix);
	if (len > 0)
		matrixcat = ft_calloc(len + 2, sizeof(char *));
	else
		matrixcat = NULL;
	if (!matrixcat)
		return (matrix);
	while (++i < len)
	{
		matrixcat[i] = ft_strdup(matrix[i]);
		if (!matrixcat[i])
		{
			ft_free_matrix(&matrixcat);
			return (NULL);
		}
	}
	matrixcat[++i] = ft_strdup(str);
	return (matrixcat);
}
