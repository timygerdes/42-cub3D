/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cspp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:47:06 by tgerdes           #+#    #+#             */
/*   Updated: 2021/11/09 17:08:25 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_char(t_print *tab)
{
	char	c;

	c = va_arg(tab->args, int);
	tab->total_len += write(1, &c, 1);
}

void	ft_print_string(t_print *tab)
{
	char	*s;
	int		i;

	i = 0;
	s = va_arg(tab->args, char *);
	if (!s)
		s = "(null)";
	while (s[i])
	{
		tab->total_len += write(1, &s[i], 1);
		i++;
	}
}

void	ft_print_pointer(t_print *tab)
{
	unsigned long	j;

	j = (unsigned long)va_arg(tab->args, void *);
	tab->total_len += write(1, "0x", 2);
	tab->total_len += ft_putnbr_base(j, "0123456789abcdef");
}

void	ft_print_percentage(t_print *tab)
{
	tab->total_len += write(1, "%", 1);
}
