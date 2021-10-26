/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:53:11 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/25 17:53:22 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(unsigned char c)
{
	if (('A' <= c && c <= 'Z') && ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}
