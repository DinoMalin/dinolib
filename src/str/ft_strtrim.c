/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:30:04 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:15:45 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(str) - 1;
	while (ft_strchr((char *)set, str[start]))
		start++;
	while (ft_strchr((char *)set, str[end]))
		end--;
	return (ft_substr(str, start, (end - start) + 1));
}
