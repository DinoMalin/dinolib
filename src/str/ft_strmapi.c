/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:45:58 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:15:29 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	result = ft_calloc((ft_strlen(str) + 1), sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = f(i, str[i]);
		i++;
	}
	return (result);
}
