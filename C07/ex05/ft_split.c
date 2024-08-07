/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:20:08 by chdonnat          #+#    #+#             */
/*   Updated: 2024/08/02 07:39:48 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strndup(char *src, int n, int i)
{
	int		j;
	char	*copy;

	copy = (char *) malloc ((n + 1) * sizeof (char));
	if (copy == NULL)
		return (NULL);
	j = 0;
	while (j < n)
	{
		copy[j] = src[j + i];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

int	ft_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	count;
	int	in_word;
	int	charset_len;

	count = 0;
	in_word = 0;
	charset_len = ft_strlen(charset);
	while (*str)
	{
		if (ft_is_separator(*str, charset))
		{
			str++;
			in_word = 0;
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
			str++;
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		backup_i;
	int		i;
	int		k;

	i = 0;
	k = 0;
	res = (char **)malloc((ft_word_count(str, charset) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (k < ft_word_count(str, charset))
	{
		while (ft_is_separator(str[i], charset))
			i++;
		backup_i = i;
		while (!ft_is_separator(str[i], charset) && str[i])
			i++;
		if ((i - backup_i) > 0)
		{
			res[k] = ft_strndup(str, (i - backup_i), backup_i);
			k++;
		}
	}
	res[k] = NULL;
	return (res);
}
/*
int main(void)
{
    char str[] = "Ca42va4etre2tout42424noir";
    char charset[] = "42";
    char **tab_str;
    int i;

    tab_str = ft_split(str, charset);
    i = 0;

    while (tab_str[i])
    {
        printf("%s\n", tab_str[i]);
        free(tab_str[i]);
        i++;
    }
    free(tab_str);

    return 0;
}
*/
