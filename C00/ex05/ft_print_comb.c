/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:59:29 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/30 11:27:00 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	firstdigit;
	char	seconddigit;
	char	thirddigit;

	firstdigit = '0';
	while (firstdigit <= '7')
	{
		seconddigit = firstdigit + 1;
		while (seconddigit <= '8')
		{
			thirddigit = seconddigit + 1;
			while (thirddigit <= '9')
			{	
				write(1, &firstdigit, 1);
				write(1, &seconddigit, 1);
				write(1, &thirddigit, 1);
				if (firstdigit != '7')
					write(1, ", ", 2);
				thirddigit++;
			}
			seconddigit++;
		}
		firstdigit++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/