/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:31:30 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/31 21:40:26 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_string(char ch, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	int		i;
	int		j;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	c = 0;
	i = 0;
	j = ft_strlen(s1);
	while (ft_check_string(s1[i], set))
		i++;
	while (ft_check_string(s1[j - 1], set) && j > i)
		j--;
	if (j - i <= 0)
		return ((char *)ft_calloc(1, sizeof(char)));
	ptr = (char *)ft_calloc(((j - i) + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (((i + c) <= j - 1) && j > 0)
	{
		ptr[c] = s1[i + c];
		c++;
	}
	return (ptr);
}
