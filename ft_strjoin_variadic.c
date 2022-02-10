/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_variadic.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:46:43 by 0xNino            #+#    #+#             */
/*   Updated: 2022/02/10 14:12:46 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_variadic(unsigned int arg_count, ...)
{
	va_list			args;
	unsigned int	i;
	char			*arg_buffer;
	char			*tmp;
	char			*result;

	va_start(args, arg_count);
	i = 0;
	result = NULL;
	while (i < arg_count)
	{
		arg_buffer = va_arg(args, char *);
		if (result == NULL)
			result = ft_strdup(arg_buffer);
		else
		{
			tmp = ft_strjoin(result, arg_buffer);
			free(result);
			result = tmp;
		}
		i++;
	}
	va_end(args);
	return (result);
}
