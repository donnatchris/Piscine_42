/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:39:10 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/21 13:56:07 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "123456789";
	char	str2[] = "123 456 789";
	char	str3[] = "123wuehiYYHUHHIHDS";
	char	str4[] = "s5r8f4d6";
	char	str5[] = " ";
	char	str6[] = "";

	printf("La chaine: %s renvoie la valeur %d\n", str1, ft_str_is_numeric(str1));
	printf("La chaine: %s renvoie la valeur %d\n", str2, ft_str_is_numeric(str2));
	printf("La chaine: %s renvoie la valeur %d\n", str3, ft_str_is_numeric(str3));
	printf("La chaine: %s renvoie la valeur %d\n", str4, ft_str_is_numeric(str4));
	printf("La chaine: %s renvoie la valeur %d\n", str5, ft_str_is_numeric(str5));
	printf("La chaine: %s renvoie la valeur %d\n", str6, ft_str_is_numeric(str6));
	return (0);
}
*/
