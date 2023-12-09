/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:19:15 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 19:21:09 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		return (ft_putnbr_fd(n / 10, fd) + ft_putnbr_fd(n % 10, fd));
	else if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return (1);
	}
	return (0);
}
