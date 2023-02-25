/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:16:45 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/06 00:53:58 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	negative_postive(int nbr, char sign)
{
	if (sign == '-')
		return (nbr * -1);
	else
		return (nbr);
}

char	determine_sign(char newsign, char oldsign)
{
	if (oldsign == '-' && newsign == '-')
		return ('+');
	else if (oldsign == '-' && newsign == '+')
		return ('-');
	else if (oldsign == '+' && newsign == '-')
		return ('-');
	else
		return ('+');
}

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		resultnumber;
	char	sign;

	sign = '+';
	i = 0;
	resultnumber = 0;
	while (is_space(str[i]) == 1)
	{
		i++;
	}
	while ((str[i] == '-' || str[i] == '+'))
	{
		sign = determine_sign(str[i], sign);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultnumber = resultnumber * 10 + (str[i] - 48);
		i++;
	}
	return (negative_postive(resultnumber, sign));
}

int	main(void)
{
	int	number;

	number = ft_atoi("   ---++-+--+1234abc");
	printf("%d", number);
}