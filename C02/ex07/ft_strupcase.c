/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:49:21 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/22 14:47:29 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int		main(void)
{
	char	str[] = "Sa1ut4 ";
	printf("Chaine avant fct: %s\n", str);
	printf("Chaine apres fct: %s\n", ft_strupcase(str));
	return (0);
}
*/
