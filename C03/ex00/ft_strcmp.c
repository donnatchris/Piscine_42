/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:57:59 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/23 13:20:32 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "abcdef";
	char	s2[] = "abcdef";
	printf ("%s\n", s1);
	printf ("%s\n", s2);
	printf ("La ft renvoie %d\n", ft_strcmp(s1, s2));
	char	s3[] = "abcdeb";
	char	s4[] = "abcdea";
	printf ("%s\n", s3);
	printf ("%s\n", s4);
	printf ("La ft renvoie %d\n", ft_strcmp(s3, s4));
	char	s5[] = "abcdef";
	char	s6[] = "abcdeg";
	printf ("%s\n", s5);
	printf ("%s\n", s6);
	printf ("La ft renvoie %d\n", ft_strcmp(s5, s6));
	char	s7[] = "abcda";
	char	s8[] = "abcd";
	printf ("%s\n", s7);
	printf ("%s\n", s8);
	printf ("La ft renvoie %d\n", ft_strcmp(s7, s8));
	return (0);
}
*/
