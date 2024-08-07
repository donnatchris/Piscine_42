/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:02:04 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/18 15:31:17 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*void	putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	int	i1;
	int i2;
	int	*ptr1;
	int	*ptr2;

	i1 = 1;
	i2 = 2;
	ptr1 = &i1;
	ptr2 = &i2;
	ft_swap (ptr1, ptr2);
	putchar (i1 + 48);
	putchar (i2 + 48);
	return (0);
}*/
