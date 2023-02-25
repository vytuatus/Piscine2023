/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:40:34 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/06 21:44:08 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int main() {
    // char str1[] = "xxxxxx";
    // char str2[] = "yyyyyy";
    // printf("std: %i, yours: %i\n", strncmp(str1, str2, 20), ft_strncmp(str1, str2, 20));
    // printf("std: %i, yours: %i\n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));
    // printf("std: %i, yours: %i\n", strncmp(str1, str2, 1), ft_strncmp(str1, str2, 1));

    // char str1[] = "abcadef";
    // char str2[] = "abcad";
    // printf("std: %i, yours: %i\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
    // printf("std: %i, yours: %i\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));

    // char str1[] = "abcad";
    // char str2[] = "abcadtg";
    // printf("std: %i, yours: %i\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
    // printf("std: %i, yours: %i\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));
// }