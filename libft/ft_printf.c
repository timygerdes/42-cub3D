/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:30:29 by tgerdes           #+#    #+#             */
/*   Updated: 2021/11/09 17:02:15 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_print	*ft_initialise_tab(t_print *tab)
{
	tab->total_len = 0;
	return (tab);
}

int	ft_check_arg_type(t_print *tab, const char *format, int pos)
{
	if (format[pos] == 'c')
		ft_print_char(tab);
	else if (format[pos] == 's')
		ft_print_string(tab);
	else if (format[pos] == 'p')
		ft_print_pointer(tab);
	else if (format[pos] == 'd' || format[pos] == 'i')
		ft_print_int(tab);
	else if (format[pos] == 'u')
		ft_print_unsigned_int(tab);
	else if (format[pos] == 'x' || format[pos] == 'X')
		ft_print_hexa_int(tab, format[pos] - 23);
	else if (format[pos] == '%')
		ft_print_percentage(tab);
	return (pos);
}

int	ft_printf(const char *format, ...)
{
	int		rtn;
	int		i;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialise_tab(tab);
	va_start(tab->args, format);
	i = 0;
	rtn = 0;
	while (format[i])
	{
		if (format[i] == '%')
			i = ft_check_arg_type(tab, format, i + 1);
		else
			rtn += write(1, &format[i], 1);
		i++;
	}
	va_end(tab->args);
	rtn += tab->total_len;
	free(tab);
	return (rtn);
}
