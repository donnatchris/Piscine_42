/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:17:48 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/23 18:33:22 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
int		main(void)
{
	char	str[] = "bcaawwww";
	char	to_find[] = "aa";

	printf("Chaine de depart: %s\n", str);
	printf("Chaine a trouver: %s\n", to_find);
	printf("Chaine trouvee par la fonction: %s\n", ft_strstr(str, to_find));
	return (0);
}
*/
