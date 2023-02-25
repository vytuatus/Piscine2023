/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:14:37 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 12:17:47 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	*a = tempa;
	*b = tempb;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 2;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d", a);
// 	printf("%d", b);

// 	if (a == 5 / 2 && b == 5 % 2)
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