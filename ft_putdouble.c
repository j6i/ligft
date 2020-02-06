/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgabelho <jgabelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:52:15 by jgabelho          #+#    #+#             */
/*   Updated: 2020/02/06 15:55:15 by jgabelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void			ft_putdouble(double d)
{
	char	*sd;

	sd = ft_dtoa(d, ft_doublelen(d));
	write(1, &sd, ft_strlen(sd));
}
