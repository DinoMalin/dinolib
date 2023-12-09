/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:36:32 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 04:21:02 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	len_split(char const *str, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			result++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (result);
}

static int	len_word(char const *str, char c, int start)
{
	int	result;

	result = 0;
	while (str[start + result] && str[start + result] != c)
		result++;
	return (result);
}

static char	**free_split(char **split, int start)
{
	while (start >= 0)
		free(split[start--]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	char	**result;

	result = malloc((len_split(str, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[j])
	{
		while (str[j] && str[j] == c)
			j++;
		if (!str[j])
			break ;
		result[i++] = ft_substr(str, j, len_word(str, c, j));
		if (!result[i - 1])
			return (free_split(result, i - 2));
		while (str[j] && str[j] != c)
			j++;
	}
	result[i] = NULL;
	return (result);
}
