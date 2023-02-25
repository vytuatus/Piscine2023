/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:08:50 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/09 22:05:51 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
		return (0);
	ints = malloc(sizeof(int) * size);
	if (!ints)
		return (0);
	i = 0;
	while (i < size)
	{
		ints[i] = i + min;
		i++;
	}
	return (ints);
}

// int	main(void)
// {
// 	int	*ints;
// 	int i = 0;
// 	int max = 6;
// 	int min = 2;
// 	ints = ft_range(min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d\n", ints[i]);
// 		i++;
// 	}
// }