/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:19:55 by jcario            #+#    #+#             */
/*   Updated: 2023/12/08 20:54:43 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;

	i = 0;
	j = 0;
	dst_size = ft_strlen(dst);
	if (!size)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	if (i < size)
		dst[i] = '\0';
	if (dst_size > size)
		return (ft_strlen(src) + size);
	else
		return (dst_size + ft_strlen(src));
}
