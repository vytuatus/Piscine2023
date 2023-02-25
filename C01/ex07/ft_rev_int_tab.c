/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:58:38 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 12:19:40 by vverbus          ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - i - 1)
	{
		ft_swap((tab + i), (tab + (size - i - 1)));
		i++;
	}
}

// int	main(void)
// {
// 	int		numbers[3];
// 	int		size;

// 	numbers[0] = 1;
// 	numbers[1] = 2;
// 	numbers[2] = 3;
// 	size = 3;
// 	ft_rev_int_tab(numbers, size);
// 	printf("%d", numbers[0]);
// 	printf("%d", numbers[1]);
// 	printf("%d", numbers[2]);
// }