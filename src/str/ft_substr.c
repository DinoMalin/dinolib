/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:02:17 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:15:52 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t size)
{
	char	*result;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (!len_src || len_src < start)
		return (ft_strdup(""));
	if (len_src - start < size)
		size = len_src - start;
	result = malloc((size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, src + start, size + 1);
	return (result);
}
