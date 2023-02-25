/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:39:13 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 12:18:58 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

// int	main(void)
// {
// 	int		size;
// 	char	sizebutchar;

// 	char	str[] = "hola\n";

// 	size = ft_strlen(str);
// 	sizebutchar = size % 10 + 48;
// 	write(1, &sizebutchar, 1);
// 	return (0);
// }