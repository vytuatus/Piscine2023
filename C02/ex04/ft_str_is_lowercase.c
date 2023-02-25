/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:48:24 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 15:49:09 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	search_for_lowercase(char *str, int count, int i)
{
	char	digit;

	while (count < 123)
	{	
		digit = count;
		if (str[i] == digit)
		{
			return (1);
		}
		count++;
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int		size;
	int		i;
	int		count;
	int		found;

	i = 0;
	size = ft_strlen(str);
	if (size == 0)
		return (1);
	while (str[i] != '\0')
	{
		count = 97;
		found = search_for_lowercase(str, count, i);
		if (found == 0)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "asdfdfdfgdfASa";

// 	return (ft_str_is_lowercase(str));
// }