/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:03:42 by jcario            #+#    #+#             */
/*   Updated: 2023/12/08 21:15:17 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int search)
{
	int	i;

	i = ft_strlen(str);
	if (!(unsigned char)search)
		return (str + ft_strlen(str));
	while (i-- >= 0)
		if (str[i] == (unsigned char)search)
			return (&str[i]);
	return (NULL);
}
