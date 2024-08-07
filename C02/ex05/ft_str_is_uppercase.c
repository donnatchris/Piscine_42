/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:02:36 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/21 14:06:55 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	str2[] = "abcde";
	char	str3[] = "ABC DEF";
	char	str4[] = "RT67JK89";
	char	str5[] = " ";
	char	str6[] = "";

	printf("La chaine: %s renvoie la valeur %d\n", str1, ft_str_is_uppercase(str1));
	printf("La chaine: %s renvoie la valeur %d\n", str2, ft_str_is_uppercase(str2));
	printf("La chaine: %s renvoie la valeur %d\n", str3, ft_str_is_uppercase(str3));
	printf("La chaine: %s renvoie la valeur %d\n", str4, ft_str_is_uppercase(str4));
	printf("La chaine: %s renvoie la valeur %d\n", str5, ft_str_is_uppercase(str5));
	printf("La chaine: %s renvoie la valeur %d\n", str6, ft_str_is_uppercase(str6));
	return (0);
}
*/
