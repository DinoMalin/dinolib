/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 03:20:26 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 18:58:45 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_putnbr_fd(int n, int fd)
{
	if (n <= -10)
	{
		ft_putchar_fd('-', fd);
		return (1 + ft_putnbr_fd(-(n / 10), fd) + ft_putnbr_fd(-(n % 10), fd));
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		return (1 + ft_putnbr_fd(-n, fd));
	}
	else if (n >= 10)
		return (ft_putnbr_fd(n / 10, fd) + ft_putnbr_fd(n % 10, fd));
	else if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return (1);
	}
	return (0);
}