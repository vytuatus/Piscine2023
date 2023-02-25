/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:25:38 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/16 21:36:29 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		get_atoi_nbr_len(int atoinbr, char *base);
void	from_int_to_basestr(int nbr, char *base, int nbrlen, char *finalstr);

int	check_for_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 1;
		while (str[i] != str[i + j] && str[i + j] != '\0')
			j++;
		if (str[i + j] != '\0')
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (i);
}

int	check_for_whitespace(char *str, int *ptr_i)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	check_charpos_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	number;
	int	baselen;
	int	charpos;

	i = 0;
	number = 0;
	baselen = check_for_error(base);
	sign = check_for_whitespace(str, &i);
	while (check_charpos_in_base(str[i], base) != -1)
	{
		charpos = check_charpos_in_base(str[i], base);
		number = number * baselen + charpos;
		i++;
	}
	return (number * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		atoinumber;
	int		finalstrlen;
	char	*finalstr;

	if (check_for_error(base_from) == 1 || check_for_error(base_to) == 1)
		return (0);
	atoinumber = ft_atoi_base(nbr, base_from);
	finalstrlen = get_atoi_nbr_len(atoinumber, base_to);
	finalstr = (char *) malloc(sizeof(char) * finalstrlen + 1);
	from_int_to_basestr(atoinumber, base_to, finalstrlen, finalstr);
	finalstr[finalstrlen] = '\0';
	return (finalstr);
}

#include <stdio.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_convert_base("  --++100  ", "0123456789", "0123456789"));
}