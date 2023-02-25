/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:40:39 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/16 19:32:05 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	current_char_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && current_char_is_sep(str[i], charset))
		{
			i++;
		}
		if (str[i] != '\0')
		{
			count++;
		}
		while (str[i] != '\0' && !current_char_is_sep(str[i], charset))
		{
			i++;
		}
	}
	return (count);
}

char	*get_substring(char *str, char *charset)
{
	int		i;
	int		substringlen;
	char	*substring;

	i = 0;
	while (str[i] != '\0' && !current_char_is_sep(str[i], charset))
	{
		i++;
	}
	substring = (char *) malloc(sizeof(char) * i + 1);
	substringlen = i;
	i = 0;
	while (i < substringlen)
	{
		substring[i] = str[i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **) malloc(sizeof(char *) * (count_strings(str, charset) + 1));
	if (!strs)
		return (0);
	while (*str)
	{
		while (*str && current_char_is_sep(*str, charset))
		{
			str++;
		}
		if (*str)
		{
			strs[i] = get_substring(str, charset);
			i++;
		}
		while (*str && !current_char_is_sep(*str, charset))
		{
			str++;
		}
	}
	strs[i] = 0;
	return (strs);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	**strs;
// 	int		i;

// 	i = 0;
// 	str = "i am a programmeraaaa";
// 	charset = " a";
// 	strs = ft_split(str, charset);
// 	while (strs[i] != 0)
// 	{
// 		printf("[%d] string is: %s\n", i, strs[i]);
// 		i++;
// 	}
// }