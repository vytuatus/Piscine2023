/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:07:59 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 12:17:07 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 5;
// 	b = 2;

// 	ft_div_mod(a, b, &div, &mod);

// 	if (div == a / b && mod == a % b)
// 	{
// 		write(1, "test passed", 11);
// 		write(1, "\n", 1);
// 		return (0);
// 	}
// 	else
// 	{
// 		write(1, "test failed", 11);
// 		write(1, "\n", 1);
// 		return (-1);
// 	}
// }