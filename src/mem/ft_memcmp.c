/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:10:36 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 14:38:38 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t len)
{
	size_t			i;
	unsigned char	*uc_ptr_1;
	unsigned char	*uc_ptr_2;

	i = 0;
	uc_ptr_1 = (unsigned char *)ptr1;
	uc_ptr_2 = (unsigned char *)ptr2;
	while (i < len)
	{
		if (uc_ptr_1[i] != uc_ptr_2[i])
			return (uc_ptr_1[i] - uc_ptr_2[i]);
		i++;
	}
	return (0);
}
