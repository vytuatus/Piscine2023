/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:39:56 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/01 11:06:59 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*create_hex_basestring(char *str)
{
	int	i;

	i = 0;
	while (i + '0' >= '0' && i + '0' <= '9')
	{
		str[i] = i + 48;
		i++;
	}
	while (i + 'a' - '9' >= 'a' && i + 'a' - '9' <= 'f')
	{
		str[i] = i + 'a' - '9';
		i++;
	}
	str[i] = '\0';
	return (str);
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

void	ft_putstr_non_printable(char *str)
{
	char	hexstrempty[16];
	char	*hexstrfull;
	int		i;
	int		isprintable;

	i = 0;
	hexstrfull = create_hex_basestring(hexstrempty);
	while (str[i] != '\0')
	{
		isprintable = search_for_printable(str, 32, i);
		if (isprintable == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hexstrfull[str[i] / 16]);
			ft_putchar(hexstrfull[str[i] % 16]);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Coucou\ntu vas bie\tn ?";
// 	ft_putstr_non_printable(str);
// }