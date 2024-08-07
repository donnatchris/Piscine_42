/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:41:48 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/23 14:24:02 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned int)s1[i] - (unsigned int)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "abcdeg";
	char	s2[] = "abcdef";
	printf ("avec n vaut 3:\n");
	printf ("%s\n", s1);
	printf ("%s\n", s2);
	printf ("La ft renvoie %d\n", ft_strncmp(s1, s2, 3));
	char	s3[] = "abc";
	char	s4[] = "abddea";
	printf ("%s\n", s3);
	printf ("%s\n", s4);
	printf ("La ft renvoie %d\n", ft_strncmp(s3, s4, 3));
	char	s5[] = "abDdef";
	char	s6[] = "abcdefg";
	printf ("%s\n", s5);
	printf ("%s\n", s6);
	printf ("La ft renvoie %d\n", ft_strncmp(s5, s6, 3));
	char	s7[] = "ab";
	char	s8[] = "abcde";
	printf ("%s\n", s7);
	printf ("%s\n", s8);
	printf ("La ft renvoie %d\n", ft_strncmp(s7, s8, 3));
	return (0);
}
*/
