/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:48:24 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 15:54:47 by vverbus          ###   ########.fr       */
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

int	search_for_printable(char *str, int count, int i)
{
	char	printable;

	while (count <= 126)
	{	
		printable = count;
		if (str[i] == printable)
		{
			return (1);
		}
		count++;
	}
	return (0);
}

int	ft_str_is_printable(char *str)
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
		count = 32;
		found = search_for_printable(str, count, i);
		if (found == 0)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[1];
// 	str[0] = 0;

// 	return (ft_str_is_printable(str));
// }