/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:32:48 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/09 22:06:47 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (!*range)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}

// int	main(void)
// {
// 	int	size;
// 	int i = 0;
// 	int max = 6;
// 	int min = 3;
// 	int *range;
// 	size = ft_ultimate_range(&range, min, max);
// 	while (i < size)
// 	{
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// }