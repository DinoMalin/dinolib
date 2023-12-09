/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:14:34 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 15:25:17 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*result;
	size_t	len_str1;
	size_t	len_str2;

	len_str1 = ft_strlen(str1);
	len_str2 = ft_strlen(str2);
	result = malloc((len_str1 + len_str2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, str1, len_str1 + 1);
	ft_strlcat(result, str2, len_str1 + len_str2 + 1);
	return (result);
}
