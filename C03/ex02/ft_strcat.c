/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:52:24 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/23 09:14:59 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strsize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	i;

	dest_size = ft_strsize(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char	src[] = "les loulous!";
	char	dest[50] = "Salut ";
	printf("Chaine src: %s\n", src);
	printf("Chaine dest: %s\n", dest);
	printf("Chaine apres fonction: %s\n", ft_strcat(dest, src));
	return (0);
}
*/
