/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:59:36 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/25 16:18:15 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ctr;

	ctr = 0;
	while (*s != '\0')
	{
		s++;
		ctr++;
	}
	while (ctr > 0)
	{
		if (*s == (char)c)
		{
			return ((char *)(s));
		}
		s--;
		ctr--;
	}
	if (*s == (char)c)
	{
		return ((char *)(s));
	}
	return (NULL);
}
