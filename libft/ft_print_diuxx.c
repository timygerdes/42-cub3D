/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_diuxx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:48:04 by tgerdes           #+#    #+#             */
/*   Updated: 2022/01/10 00:19:48 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write_zero(t_print *tab)
{
	tab->total_len += write(1, "0", 1);
}

void	ft_print_int(t_print *tab)
{
	int		i;
	int		j;
	char	*num;

	i = 0;
	j = va_arg(tab->args, int);
	if (!j)
	{
		ft_write_zero(tab);
		return ;
	}
	num = ft_itoa(j);
	if (!num)
		return ;
	while (j && num[i])
	{
		tab->total_len += write(1, &num[i], 1);
		i++;
	}
	free(num);
}

void	ft_print_unsigned_int(t_print *tab)
{
	int				i;
	unsigned int	j;
	char			*num;

	i = 0;
	j = va_arg(tab->args, int);
	if (!j)
	{
		ft_write_zero(tab);
		return ;
	}
	num = ft_uitoa(j);
	if (!num)
		return ;
	while (num[i])
	{
		tab->total_len += write(1, &num[i], 1);
		i++;
	}
	free(num);
}

void	ft_print_hexa_int(t_print *tab, int c)
{
	unsigned int	j;
	int				len;
	char			*num;

	j = va_arg(tab->args, unsigned int);
	if (!j)
	{
		ft_write_zero(tab);
		return ;
	}
	len = ft_numlen_base(j, 16);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return ;
	num = ft_itoa_base(num, j, 16, c);
	while (num && len-- > 0)
		tab->total_len += write(1, &num[len], 1);
	free(num);
}
