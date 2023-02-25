/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:14:13 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/07 15:19:10 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

int	main(int argc, char *argv[])
{
	int	parameter;

	parameter = 1;
	while (argc > 1)
	{
		putstr(argv[parameter]);
		putstr("\n");
		parameter++;
		argc--;
	}
}
