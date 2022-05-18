/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:48:18 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/31 19:37:49 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calc_words(char const *s, char c)
{
	int		i;
	int		word_count;
	int		del_bool;

	i = 0;
	word_count = 1;
	del_bool = 0;
	while (s[i] != '\0')
	{
		if (del_bool && s[i] != c)
		{
			word_count++;
			del_bool = 0;
		}
		else if (s[i] == c)
		{
			del_bool = 1;
		}
		i++;
	}
	return (word_count);
}

static int	ft_calc_string_len(char const *s, char c)
{
	int	str_len;

	str_len = 0;
	while (s[str_len] != '\0' && s[str_len] != c)
	{
		str_len++;
	}
	return (str_len);
}

static char	**ft_split_string(char **arr_ptr, char const *s, char c)
{
	int		char_count;
	int		i;

	char_count = 0;
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s)
		{
			char_count = ft_calc_string_len(s, c);
			arr_ptr[i] = ft_calloc(char_count + 1, sizeof(char));
			if (!arr_ptr[i])
				return (NULL);
			ft_memcpy(arr_ptr[i], s, (size_t)char_count);
			s += char_count;
			i++;
		}
	}
	return (arr_ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_ptr;

	if (!s)
		return (NULL);
	arr_ptr = (char **)ft_calloc((ft_calc_words(s, c) + 1), sizeof(char *));
	if (!arr_ptr)
		return (NULL);
	ft_split_string(arr_ptr, s, c);
	return (arr_ptr);
}
