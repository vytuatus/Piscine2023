/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:23:30 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/08 16:04:18 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	if (nb >= 2147483647)
		return (0);
	if (nb > 1)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				nb++;
				return (ft_find_next_prime(nb));
			}
			i++;
		}
		return (nb);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(100895161));
// }