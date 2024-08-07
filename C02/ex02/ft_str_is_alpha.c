/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:58:58 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/21 12:34:33 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Salut Les lOulouSxz";
	char	str3[] = "$";
	char	str4[] = "Oui, ou non?";
	char	str5[] = " ";
	char	str6[] = "";

	printf("La chaine: %s renvoie la valeur %d\n", str1, ft_str_is_alpha(str1));
	printf("La chaine: %s renvoie la valeur %d\n", str2, ft_str_is_alpha(str2));
	printf("La chaine: %s renvoie la valeur %d\n", str3, ft_str_is_alpha(str3));
	printf("La chaine: %s renvoie la valeur %d\n", str4, ft_str_is_alpha(str4));
	printf("La chaine: %s renvoie la valeur %d\n", str5, ft_str_is_alpha(str5));
	printf("La chaine: %s renvoie la valeur %d\n", str6, ft_str_is_alpha(str6));
	return (0);
}
*/
