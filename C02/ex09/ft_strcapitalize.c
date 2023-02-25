/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:48:24 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 17:06:10 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	replace_to_lowercase(char *str, int i)
{
	char	letter;
	int		count;

	count = 65;
	while (count < 91)
	{	
		letter = count;
		if (str[i] == letter)
		{
			str[i] = letter + 32;
			return ;
		}
		count++;
	}
}

int	check_if_alphanumerical(char letter)
{
	if ('0' <= letter && letter <= '9' )
		return (0);
	else if ('a' <= letter && letter <= 'z')
		return (0);
	else if ('A' <= letter && letter <= 'Z')
		return (0);
	else
		return (1);
}

void	capitalize_first_letter(char *str, int i)
{
	int	previousdigitalphanumerical;

	previousdigitalphanumerical = check_if_alphanumerical(str[i - 1]);
	if ('a' <= str[i] && str[i] <= 'z' && previousdigitalphanumerical == 1)
	{
		str[i] = str[i] - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		replace_to_lowercase(str, i);
		capitalize_first_letter(str, i);
		i++;
	}
	i = 0;
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "salut, coMMent tu vas ? 
// 42mots quarante-deux; cinquante+et+un";
// 	char	*ptr;
// 	int 	i;
// 	i = 0;
// 	ptr = ft_strcapitalize(str);
// 	while (ptr[i] != '\0')
// 	{
// 		write(1, (ptr + i), 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }