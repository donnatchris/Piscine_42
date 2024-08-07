/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:13:26 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/22 15:10:17 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_charupcase(char c)
{
	c = c - 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = ft_charupcase(str[i]);
	i++;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				&& (!(str[i -1] >= 'A' && str[i -1] <= 'Z'))
				&& (!(str[i - 1] >= '0' && str[i -1] <= '9')))
				str[i] = ft_charupcase(str[i]);
		}
		i++;
	}
	return (str);
}
/*
int		main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Chaine avant fct: %s\n", str);
	printf("Chaine apres fct: %s\n", ft_strcapitalize(str));
	return (0);
}
*/
