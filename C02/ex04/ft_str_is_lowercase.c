/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:44:58 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/21 13:53:08 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "abcdefghijklmnopqrstuv";
	char	str2[] = "abcd efgh";
	char	str3[] = "aBcDeFgH";
	char	str4[] = "s5r8f4d6";
	char	str5[] = " ";
	char	str6[] = "";

	printf("La chaine: %s renvoie la valeur %d\n", str1, ft_str_is_lowercase(str1));
	printf("La chaine: %s renvoie la valeur %d\n", str2, ft_str_is_lowercase(str2));
	printf("La chaine: %s renvoie la valeur %d\n", str3, ft_str_is_lowercase(str3));
	printf("La chaine: %s renvoie la valeur %d\n", str4, ft_str_is_lowercase(str4));
	printf("La chaine: %s renvoie la valeur %d\n", str5, ft_str_is_lowercase(str5));
	printf("La chaine: %s renvoie la valeur %d\n", str6, ft_str_is_lowercase(str6));
	return (0);
}
*/
