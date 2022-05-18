/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:16:33 by tgerdes           #+#    #+#             */
/*   Updated: 2022/05/02 23:06:37 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char const *s1, char const c)
{
	size_t	i;
	size_t	s1_len;
	char	*ptr;

	i = 0;
	s1_len = ft_strlen(s1);
	ptr = ft_calloc(((s1_len + 1) + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < s1_len)
	{
		ptr[i] = s1[i];
		i++;
	}
	free((void *)(s1));
	ptr[i] = c;
	return (ptr);
}
