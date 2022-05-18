/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:18:39 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/25 17:38:08 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*arr;

	s1_len = ft_strlen(s1) + 1;
	arr = malloc(sizeof(char) * s1_len);
	if (!arr)
		return (NULL);
	arr = ft_memcpy(arr, s1, s1_len);
	return (arr);
}
