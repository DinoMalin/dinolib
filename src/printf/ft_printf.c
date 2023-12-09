/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:13:06 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 19:36:52 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_ptr(void *ptr)
{
	if (!ptr)
		return (ft_putstr_fd("(nil)", 1));
	return (ft_puthexa_fd((unsigned long)ptr, 1, FALSE));
}

int	ft_put_var(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar_fd((char)va_arg(args, int), 1));
	if (type == 's')
		return (ft_putstr_fd((char *)va_arg(args, char *), 1));
	if (type == 'p')
		return (handle_ptr((void *)va_arg(args, void *)));
	if (type == 'd')
		return (ft_putnbr_fd((int)va_arg(args, int), 1));
	if (type == 'i')
		return (ft_putnbr_fd((int)va_arg(args, int), 1));
	if (type == 'u')
		return (ft_putunbr_fd((unsigned int)va_arg(args, unsigned int), 1));
	if (type == 'x')
		return (ft_puthexa_fd((int)va_arg(args, int), 1, FALSE));
	if (type == 'X')
		return (ft_puthexa_fd((int)va_arg(args, int), 1, TRUE));
	if (type == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += ft_put_var(str[i], args);
			i++;
		}
		if (str[i] && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

// int main()
// {
// 	ft_printf("%d", ft_printf(" %x ", 16));
// }
