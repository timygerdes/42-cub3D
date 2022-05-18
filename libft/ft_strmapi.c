/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:46:22 by tgerdes           #+#    #+#             */
/*   Updated: 2021/06/03 23:27:11 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (f) (unsigned int, char))
{
	int		i;
	char	*ptr;

	if (!s || !(*f))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = ft_calloc((i + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}
