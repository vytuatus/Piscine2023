/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:26:04 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/04 23:16:30 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	destcontrol[15] = "I am the ";
// 	char	*pntdestcontrol;
// 	char	dest[15] = "I am the ";
// 	char	src[] = "best coder";
// 	char	*pntdest;

// 	pntdestcontrol = strcat(destcontrol, src);
// 	printf("%s\n", pntdestcontrol);
// 	pntdest = ft_strcat(dest, src);
// 	printf("%s\n", pntdest);
// }