/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 07:30:29 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/31 16:45:37 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	dest_size;
	int	i;

	dest_size = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

int	ft_sum_size(char **strs, int size)
{
	int	i;
	int	total_size;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;
	char	*join;

	if (size == 0)
	{
		join = (char *)malloc(sizeof(char));
		if (join)
			join[0] = '\0';
		return (join);
	}
	total_size = ft_sum_size(strs, size) + (size - 1) * ft_strlen(sep) + 1;
	join = (char *)malloc(total_size * sizeof(char));
	if (join == NULL)
		return (NULL);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < size - 1)
			ft_strcat(join, sep);
		i++;
	}
	return (join);
}
/*
int main(void)
{
    char	*tab_str[] = {"Ca", "va", "etre", "tout", "noir", NULL};
    char	sep[] = " / ";
    int		size;
    char	*joined_str;

    size = 0;
    while (tab_str[size] != NULL)
        size++;
    joined_str = ft_strjoin(size, tab_str, sep);
    if (joined_str)
    {
        printf("%s\n", joined_str);
        free(joined_str);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return (0);
}
*/
