/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 22:08:54 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/25 15:43:29 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*haycast;

	i = 0;
	haycast = (char *)(haystack);
	needle_len = ft_strlen(needle);
	if (needle_len == 0 || haystack == needle)
		return (haycast);
	while (haycast[i] != '\0' && i < len)
	{
		j = 0;
		while (haycast[i + j] != '\0' && needle[j] != '\0'
			&& haycast[i + j] == needle[j] && i + j < len)
			j++;
		if (j == needle_len)
			return (haycast + i);
		i++;
	}
	return (0);
}
