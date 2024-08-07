/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 07:10:56 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/22 15:31:35 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size == 0)
		return (0);
	i = 0;
	while (src[i])
		i++;
	i++;
	j = 0;
	while (j < size - 1 && j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
/*
int	main(void)
{
	unsigned int	size_dest;
	unsigned int	size_return_ft;
	char			src[] = "Hello";
	char			dest[6];

	size_dest = 6;
	printf("source: %s\n", src);
	size_return_ft = ft_strlcpy(dest, src, size_dest);
	printf("dest: %s\n", dest);
	printf("La valeur de retour est: %d\n", size_return_ft);
	return (0);
}
*/
