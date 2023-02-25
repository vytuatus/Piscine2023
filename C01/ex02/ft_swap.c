/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:54:44 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 12:16:30 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tempa;

	tempa = *a;
	*a = *b;
	*b = tempa;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*pnta;
// 	int	*pntb;

// 	a = 2;
// 	b = 5;
// 	pnta = &a;
// 	pntb = &b;

// 	ft_swap(pnta, pntb);
// 	if (a == 5 && b == 2)
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