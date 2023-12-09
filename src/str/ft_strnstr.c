/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:23:28 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 14:45:07 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *search, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_search;

	i = 0;
	len_search = ft_strlen(search);
	if (!len_search)
		return (str);
	while (str[i] && i < size)
	{
		j = 0;
		while (str[i + j] == search[j] && i + j < size && str[i + j])
			j++;
		if (j == len_search)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
