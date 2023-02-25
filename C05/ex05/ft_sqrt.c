/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:08:32 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/08 15:43:53 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	possiblenumber;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb > 0)
	{
		possiblenumber = 2;
		while (possiblenumber * possiblenumber <= nb)
		{
			if (possiblenumber * possiblenumber == nb)
				return (possiblenumber);
			else if (possiblenumber >= 46341)
				return (0);
			possiblenumber++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_sqrt(2147483647));
// }