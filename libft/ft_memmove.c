/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:51:09 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/25 18:04:41 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*pchar1;
	char	*pchar2;

	i = 0;
	pchar1 = (char *)dst;
	pchar2 = (char *)src;
	if (!dst)
		return (NULL);
	if (pchar2 < pchar1)
	{
		while (len > 0)
		{
			len--;
			pchar1[len] = pchar2[len];
		}
		return (dst);
	}
	while (i < len)
	{
		pchar1[i] = pchar2[i];
		i++;
	}
	return (dst);
}
