/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:48:24 by vverbus           #+#    #+#             */
/*   Updated: 2023/01/30 16:40:00 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	source[] = "hejdouswe";
// 	char	destination[] = "varahouse";
// 	char	*ptr;
// 	int		i;

// 	ptr = ft_strcpy(destination, source);
// 	i = 0;
// 	while (ptr[i] != '\0')
// 	{
// 		write(1, &ptr[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }