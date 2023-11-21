/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_mandatory.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:19:57 by vopekdas          #+#    #+#             */
/*   Updated: 2023/11/21 16:20:49 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_handle_s(const char *str)
{
	int	len;

	if (str != NULL)
		ft_putstr(str);
	else
	{
		ft_putstr("(null)");
		return (6);
	}
	len = ft_strlen(str);
	return (len);
}

int ft_handle_u(unsigned int value)
{
	int len;

	len = ft_putnbr(value);
	return (len);
}

int	ft_handle_d_i(int value)
{
	int len;

	len = ft_putnbr(value);
	return (len);
}

int	ft_handle_x_X(const char c, long long value)
{
	int len;

	len = 0;
	if (c == 'x')
	{
		len = ft_putnbr_base(value, "0123456789abcdef");
	}
	else if (c == 'X')
	{
		len = ft_putnbr_base(value, "0123456789ABCDEF");
	}
	return (len);
}

int ft_handle_p(void* ptr)
{
	int	len;

	len = 0;
	if (ptr != NULL)
	{
		write(1, "0x", 2);
        len = ft_putnbr_base_p((uintptr_t)ptr, "0123456789abcdef") + 2;
	}
	else
	{
		write(1, "0x0", 3);
        len = 3;
	}
	return (len);
}
