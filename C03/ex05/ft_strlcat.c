/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:13:49 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/11 21:46:51 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;
	int				srclen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	destlen = j;
	srclen = ft_strlen(src);
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (i < size - destlen - 1 && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++; 
	}
	dest[j] = '\0';
	return (destlen + srclen);
}

int	main(void)
{
    char            dest[22] = "";
    char            src[] = "0123456789";
	char            contrdest[22] = "";
    char            contrsrc[] = "0123456789";
    unsigned int    size = 5;
    unsigned int    result;
	unsigned int    contrresult;

    result = ft_strlcat(dest, src, size);
    printf("ft_strlcat = %s : %d\n", dest, result);
	contrresult = strlcat(contrdest, contrsrc, size);
	printf("strlcat = %s : %d\n", dest, result);
    return (0);
}