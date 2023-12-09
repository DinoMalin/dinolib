/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:15:57 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 15:15:35 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t size)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && i < size && str1[i] && str2[i])
		i++;
	if (i == size)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
