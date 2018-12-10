/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgabelho <jgabelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:10:21 by jgabelho          #+#    #+#             */
/*   Updated: 2018/11/30 18:38:06 by jgabelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*src2;
	unsigned char		*dest2;

	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == (unsigned char)src2[i])
		{
			dest2[i] = src2[i];
			dest++;
			return (dest);
		}
		dest++;
		dest2[i] = src2[i];
		i++;
	}
	return (0);
}
