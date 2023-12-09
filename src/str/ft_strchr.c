/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:01:44 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:15:09 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int search)
{
	int	i;

	i = -1;
	if (!(unsigned char)search)
		return (str + ft_strlen(str));
	while (str[++i])
		if (str[i] == (unsigned char)search)
			return (&str[i]);
	return (NULL);
}
