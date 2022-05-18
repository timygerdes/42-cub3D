/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:22:18 by tgerdes           #+#    #+#             */
/*   Updated: 2021/06/18 10:25:00 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	c = 0;
	src_len = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[c] != '\0' && c < dstsize - 1)
		{
			dst[c] = src[c];
			c++;
		}
	}
	if (dstsize != 0)
		dst[c] = '\0';
	return (src_len);
}
