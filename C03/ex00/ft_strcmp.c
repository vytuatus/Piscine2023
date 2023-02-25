/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:07:16 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/06 19:52:50 by vverbus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == 0)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = " a";
// 	char	s2[] = "";
// 	char	s3[] = "a";
// 	char	s4[] = "";
// 	char	s5[] = "a b c d";
// 	char	s6[] = "a b c";
// 	char	s7[] = "a b c";
// 	char	s8[] = "a b c d";
// 	char	s9[] = "a b c";
// 	char	s10[] = "a b c";
// 	char	s11[] = "";
// 	char	s12[] = "";
// 	int res = strcmp(s1, s2);
// 	int resft = ft_strcmp(s1, s2);
// 	printf("Value returned by strcmp() is: %d\n", res);
// 	printf("Value returned by ft_strcmp() is: %d\n", resft);
// 	res = strcmp(s3, s4);
// 	resft = ft_strcmp(s3, s4);
// 	printf("Value returned by strcmp() is: %d\n", res);
// 	printf("Value returned by ft_strcmp() is: %d\n", resft);
// 	res = strcmp(s5, s6);
// 	resft = ft_strcmp(s5, s6);
// 	printf("Value returned by strcmp() is: %d\n", res);
// 	printf("Value returned by ft_strcmp() is: %d\n", resft);
// 	res = strcmp(s7, s8);
// 	resft = ft_strcmp(s7, s8);
// 	printf("Value returned by strcmp() is: %d\n", res);
// 	printf("Value returned by ft_strcmp() is: %d\n", resft);
// 	res = strcmp(s9, s10);
// 	resft = ft_strcmp(s9, s10);
// 	printf("Value returned by strcmp() is: %d\n", res);
// 	printf("Value returned by ft_strcmp() is: %d\n", resft);
// 	res = strcmp(s11, s12);
// 	resft = ft_strcmp(s11, s12);
// 	printf("Value returned by strcmp() is: %d\n", res);
// 	printf("Value returned by ft_strcmp() is: %d\n", resft);
// }