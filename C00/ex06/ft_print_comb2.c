/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:59:29 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/30 15:46:26 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_ints_as_chars(int first, int second)
{
	ft_print_char(48 + first / 10);
	ft_print_char(48 + first % 10);
	ft_print_char(' ');
	ft_print_char(48 + second / 10);
	ft_print_char(48 + second % 10);
	if (!(first == 98 && second == 99))
	{
		ft_print_char(',');
		ft_print_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	firstdigit;
	int	seconddigit;

	firstdigit = 1;
	while (firstdigit <= 98)
	{
		seconddigit = firstdigit + 1;
		while (seconddigit <= 99)
		{
			ft_print_ints_as_chars(firstdigit, seconddigit);
			seconddigit++;
		}
		firstdigit++;
	}	
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
