/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vverbus <vverbus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:23:05 by vverbus           #+#    #+#             */
/*   Updated: 2023/02/16 21:40:56 by vverbus          ###   ########.fr       */
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

int	get_atoi_nbr_len(int atoinbr, char *base)
{
	int	baselen;
	int	atoilen;

	baselen = ft_strlen(base);
	atoilen = 0;
	if (atoinbr < 0)
		atoilen++;
	while (atoinbr >= baselen)
	{
		atoinbr /= baselen;
		atoilen++;
	}
	atoilen++;
	return (atoilen);
}

void	from_int_to_basestr(int nbr, char *base, int nbrlen, char *finalstr)
{
	int	i;
	int	baselen;

	i = 0;
	baselen = ft_strlen(base);
	if (nbr < 0)
	{
		finalstr[0] = '-';
		i = 1;
	}
	nbrlen--;
	while (nbr >= baselen)
	{
		/*we transform last number of 'nbr' to char by using modula operation
		and add that char to the end of finalstr. then we decrease the 
		nbrlen and decrease the nbr so that next time we can put char
		to the second to last position of finalstr*/
		finalstr[nbrlen] = base[nbr % baselen];
		nbr /= baselen;
		nbrlen--;
	}
	finalstr[i] = base[nbr];
}
