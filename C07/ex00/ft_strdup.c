/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:13:18 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/11 14:45:19 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		srcstrlen;
	int		i;

	srcstrlen = ft_strlen(src);
	newstr = (char *) malloc(sizeof(char) * srcstrlen + 1);
	i = 0;
	if (!newstr)
		return (0);
	while (src[i] != '\0')
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// int	main(void)
// {
// 	char	*str;
// 	str = "hello girl!";
// 	ft_putstr(ft_strdup(str));
// 	ft_putstr(ft_strdup("\n"));
// }