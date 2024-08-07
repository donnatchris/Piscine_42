/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:03:32 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/23 09:12:41 by chdonnat         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_size;
	unsigned int	i;

	dest_size = ft_strsize(dest);
	i = 0;
	while (src[i] && i < nb)
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
	unsigned int	nb;

	nb = 7;
	char	src[] = "les loulous!";
	char	dest[50] = "Salut ";
	printf("Chaine src: %s\n", src);
	printf("Chaine dest: %s\n", dest);
	printf("Chaine apres fonction: %s\n", ft_strncat(dest, src, nb));
	return (0);
}
*/
