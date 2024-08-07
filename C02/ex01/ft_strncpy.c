/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:25:58 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/21 11:33:23 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int		main(void)
{
	int		n;
	char	dest[100];
	char	src[] = "Salut les loulous.";

	n = 50;
	ft_strncpy(dest, src, n);
	printf("n vaut %d\n", n);
	printf("source: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}
*/
