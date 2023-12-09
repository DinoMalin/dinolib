/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:23:22 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:17:59 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int nb)
{
	char	*result;
	int		len;
	long	nb_cpy;

	len = (nb < 0) * 2 + (nb >= 0);
	nb_cpy = ((long)(nb * (nb < 0)) *-1) + (nb * (nb > 0));
	while (nb_cpy >= 10 || nb_cpy <= -10)
	{
		len++;
		nb_cpy /= 10;
	}
	result = ft_calloc(1 + len--, sizeof(char));
	if (!result)
		return (NULL);
	nb_cpy = nb;
	if (nb < 0)
		nb_cpy = (long)(nb) *-1;
	while (len >= 0)
	{
		result[len--] = (nb_cpy % 10) + '0';
		nb_cpy /= 10;
	}
	if (nb < 0)
		result[0] = '-';
	return (result);
}
