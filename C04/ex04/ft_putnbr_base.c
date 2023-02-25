/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:10:08 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/06 00:54:54 by vverbus          ###   ########.fr       */
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkforerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(str) == 1 || str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			return (1);
		}
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;
	int		error;

	baselen = ft_strlen(base);
	error = checkforerror(base);
	if (error == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr < baselen)
		{
			ft_putchar(base[nbr]);
		}
		if (nbr >= baselen)
		{
			ft_putnbr_base(nbr / baselen, base);
			ft_putnbr_base(nbr % baselen, base);
		}
	}
}

int	main(void)
{
	ft_putnbr_base(24, "01");
	ft_putchar('\n');
	ft_putnbr_base(24, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(24, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(24, "0123456789abcdef");
	ft_putchar('\n');
}