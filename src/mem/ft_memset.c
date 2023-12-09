/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:06:42 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:14:35 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*pointer, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		*(unsigned char *)(pointer + i++) = (unsigned char)value;
	return (pointer);
}
