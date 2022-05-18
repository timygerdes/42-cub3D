/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:42:40 by tgerdes           #+#    #+#             */
/*   Updated: 2022/01/05 12:07:20 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	unsigned long	base_len;
	unsigned long	num;
	int				l;

	l = 1;
	num = n;
	base_len = ft_strlen(base);
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (l);
	}
	if (num >= base_len)
	{
		l += ft_putnbr_base(num / base_len, base);
		ft_putchar_fd(base[num % base_len], 1);
	}
	else if (num < base_len)
		ft_putchar_fd(base[num], 1);
	return (l);
}
