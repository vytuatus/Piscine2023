/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:48:24 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/03 21:21:37 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	replace_to_uppercase(char *str, int count, int i)
{
	char	letter;

	while (count < 123)
	{	
		letter = count;
		if (str[i] == letter)
		{
			str[i] = letter - 32;
			return ;
		}
		count++;
	}
}

char	*ft_strupcase(char *str)
{
	int		i;
	int		count;

	i = 0;
	while (str[i] != '\0')
	{
		count = 97;
		replace_to_uppercase(str, count, i);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "asddsad34324fFDDFf/*";
// 	char	*ptr;
// 	int 	i;

// 	i = 0;
// 	ptr = ft_strupcase(str);
// 	while (ptr[i] != '\0')
// 	{
// 		write(1, (ptr + i), 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }