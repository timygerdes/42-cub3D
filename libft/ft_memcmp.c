/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:03:13 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/25 18:16:32 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pchar1;
	const unsigned char	*pchar2;
	size_t				i;

	i = 0;
	pchar1 = (const unsigned char *)s1;
	pchar2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (pchar1[i] != pchar2[i])
			return (pchar1[i] - pchar2[i]);
		i++;
	}
	return (0);
}
