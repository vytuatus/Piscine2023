/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:57:58 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/01 21:07:09 by vverbus          ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int		innerloop;
	int		outerloop;

	outerloop = size;
	while (outerloop > 0)
	{
		innerloop = outerloop - 2;
		while (innerloop >= 0)
		{
			if (tab[outerloop - 1] < tab[innerloop])
			{
				ft_swap(&tab[outerloop - 1], &tab[innerloop]);
				innerloop = 0;
				outerloop++;
			}
			innerloop--;
		}
		outerloop--;
	}
}

// int	main(void)
// {
// 	int tab[7] = {11, 15, 5, 7, 2, 2, 1};
// 	int size = 7;
// 	int i = 0;
// 	ft_sort_int_tab(tab, size);
// 	while (i < size) 
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }