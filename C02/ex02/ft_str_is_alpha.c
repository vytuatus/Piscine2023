/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:48:24 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 15:45:42 by vverbus          ###   ########.fr       */
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

int	search_for_alphabet(char *str, int count, int i)
{
	char	letter;

	while (count < 123)
	{	
		if (count < 91 || count > 96)
		{
			letter = count;
			if (str[i] == letter)
			{
				return (1);
			}
		}
		count++;
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
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
		count = 65;
		found = search_for_alphabet(str, count, i);
		if (found == 0)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "Aa";

// 	return (ft_str_is_alpha(str));
// }