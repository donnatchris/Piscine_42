/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seguinyannis <seguinyannis@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:18:19 by seguinyanni       #+#    #+#             */
/*   Updated: 2024/08/03 16:31:50 by seguinyanni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
// check if a str contain char c ex: c -> [a, b, c] -> yes
int	ft_contain(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

///////////////////////////////////////////////////////////////////
// return number of char in str
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

///////////////////////////////////////////////////////////////////
// copy char by char
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (size == 0)
		return (l);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (l);
}

///////////////////////////////////////////////////////////////////
// count number of word in str using charset
int	nb_word(char *str, char *charset)
{
	int		i;
	int		in_word;
	int		result;

	i = 0;
	in_word = 0;
	result = 0;
	while (str[i])
	{
		if (!ft_contain(charset, str[i]) && !in_word)
		{
			in_word = 1;
			result++;
		}
		else if (ft_contain(charset, str[i]))
		{
			in_word = 0;
		}
		i++;
	}
	return (result);
}

///////////////////////////////////////////////////////////////////
// split str with charset and return a tab of str
char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		k;
	int		word_count;

	word_count = nb_word(str, charset);
	result = malloc((word_count + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && ft_contain(charset, str[i]))
			i++;
		j = i;
		while (str[i] && !ft_contain(charset, str[i]))
			i++;
		if (i > j)
		{
			result[k] = malloc(i - j + 1);
			ft_strlcpy(result[k], &str[j], i - j + 1);
			k++;
		}
	}
	return (result);
}
