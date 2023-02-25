/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:29:33 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/07 23:23:41 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		result *= nb * ft_recursive_power(nb, --power);
	}
	return (result);
}

// int	main(void)
// {
// 	int	result = ft_recursive_power(3, 3);
// 	printf("%d", result);
// }