/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:43:08 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/25 16:17:31 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pchar1;

	pchar1 = b;
	while (len > 0)
	{
		*pchar1 = c;
		len--;
		pchar1++;
	}
	return (b);
}
