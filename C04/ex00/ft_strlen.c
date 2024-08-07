/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 07:35:20 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/24 07:35:30 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
    int	strlen;
    char	string[] = "Salut les loulous";
    
    strlen = ft_strlen(string);
    printf ("%d\n", strlen);
    return (0);
}*/
