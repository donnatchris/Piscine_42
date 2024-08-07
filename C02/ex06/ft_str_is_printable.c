/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:09:02 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/21 14:45:57 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	c1 = 'q';
	char	c2 = '7';
	char	c3 = '+';
	char	c4 = 123;
	char	c5 = 12;
	char	c6 = 127;

	printf("Le caractere: %c renvoie la valeur %d\n", c1, ft_str_is_printable(&c1));
	printf("Le caractere: %c renvoie la valeur %d\n", c2, ft_str_is_printable(&c2));
	printf("Le caractere: %c renvoie la valeur %d\n", c3, ft_str_is_printable(&c3));
	printf("Le caractere: %c renvoie la valeur %d\n", c4, ft_str_is_printable(&c4));
	printf("Le caractere: %c renvoie la valeur %d\n", c5, ft_str_is_printable(&c5));
	printf("Le caractere: %c renvoie la valeur %d\n", c6, ft_str_is_printable(&c6));
	return (0);
}
*/
