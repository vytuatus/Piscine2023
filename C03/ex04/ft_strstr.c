/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:30:12 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/04 23:16:48 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "hello general kenobi";
// 	char	to_find[] = "eral";
// 	char	*pntcontrol;
// 	char	*pnt;

// 	pntcontrol = strstr(str, to_find);
// 	printf("%s\n", pntcontrol);
// 	pnt = ft_strstr(str, to_find);
// 	printf("%s\n", pnt);
// }