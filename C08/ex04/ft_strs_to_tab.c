/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:10:19 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/15 12:48:01 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stocks;
	int			size;

	i = 0;
	stocks = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stocks)
		return (NULL);
	while (i < ac)
	{
		size = ft_strlen(av[i]);
		stocks[i].str = av[i];
		stocks[i].copy = ft_strdup(av[i]);
		stocks[i].size = size;
		i++;
	}
	stocks[ac].str = 0;
	stocks[ac].copy = 0;
	return (stocks);
}

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*s;
// 	int			i;

// 	i = 0;
// 	s = ft_strs_to_tab(argc, argv);
// 	while (i <= argc)
// 	{
// 		printf("org: %s size: %d copy: %s\n", s[i].str, s[i].size, s[i].copy);
// 		free(s[i].copy);
// 		i++;
// 	}
// 	free(s);
// 	return (0);
// }