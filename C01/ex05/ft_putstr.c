/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:45:54 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/19 07:40:42 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		ft_putchar (string[i]);
		i++;
	}
}

/*int		main(void)
{
    char string[] = "Salut les loulous";
    ft_putstr (string);
    return (0);
}*/
