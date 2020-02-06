/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgabelho <jgabelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:20:31 by jgabelho          #+#    #+#             */
/*   Updated: 2020/02/06 15:49:40 by jgabelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char		*ft_dtoa(long double d, int pres)
{
	int			fr;
	double		pr;
	char		*s;
	int			len;

	if ((s = (char *)malloc(sizeof(char) * 2)) == 0)
		return (0);
	fr = (int)d;
	pr = d - (double)fr;
	s = ft_strjoin(s, ft_itoa(fr));
	if (pres >= 1)
	{
		
		s = ft_strjoin(s, ".");
		while (pres > 0)
		{
			pr = pr * 10;
			fr = (int)pr;
			pr = pr - (double)fr;
			s = ft_strjoin(s, ft_itoa(fr));
			pres--;
		}
		len = ft_strlen(s) - 1;
		pr = pr * 10;
		fr = (int)pr;
		if (fr >= 5 && fr < 9)
			s[len] = s[len] + 1;
		else if (fr < 5 && fr > 0)
			s[len] = s[len] - 1;
	}
	return (s);
}

int main()
{
	double	d;

	d = 42.123;
	printf("%s", ft_dtoa(d, 4));
	printf("\n%.4f", d);
	return 0;
}