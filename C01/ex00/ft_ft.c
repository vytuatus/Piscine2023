/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:48:29 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/31 12:14:31 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int	main(void)
// {
// 	int	a;
// 	int	*pnta;

// 	a = 5;
// 	pnta = &a;
// 	ft_ft(pnta);

// 	if (a == 42)
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