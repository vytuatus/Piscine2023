/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:45:29 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/13 22:21:09 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_final_len(char **strs, char *sep, int size)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		length += ft_strlen(sep);
		i++;
	}
	length -= ft_strlen(sep);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*resultstr;
	int		i;
	int		restultlen;

	i = 0;
	restultlen = 0;
	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	restultlen = get_final_len(strs, sep, size);
	i = 0;
	resultstr = (char *) malloc(sizeof(char) * restultlen + 1);
	if (!resultstr)
		return (0);
	resultstr[0] = "\0";
	while (i < size - 1)
	{
		resultstr = ft_strcat(resultstr, strs[i]);
		resultstr = ft_strcat(resultstr, sep);
		i++;
	}
	resultstr = ft_strcat(resultstr, strs[i]);
	return (resultstr);
}

// int	main(void)
// {
// 	char	**strs;
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*result;
// 	char	*separator;
// 	int		size;
// 	size = 3;
// 	strs = (char **) malloc(sizeof(char *) * 3);
// 	str1 = "hi";
// 	str2 = "my name is";
// 	str3 = "what?";
// 	separator = "z";
// 	strs[0] = (char *) malloc(sizeof(char) * 2 + 1);
// 	strs[1] = (char *) malloc(sizeof(char) * 10 + 1);
// 	strs[2] = (char *) malloc(sizeof(char) * 5 + 1);
// 	strs[0] = str1;
// 	strs[1] = str2;
// 	strs[2] = str3;
// 	result = ft_strjoin(0, strs, separator);
// 	printf("%s$\n", result);
// 	free(result);
// }