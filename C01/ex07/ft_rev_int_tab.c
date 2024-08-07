/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 07:43:54 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/19 08:13:49 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	down;
	int	up;

	down = 0;
	up = size - 1;
	while (down < up)
	{
		temp = tab[up];
		tab[up] = tab[down];
		tab[down] = temp;
		down++;
		up--;
	}
}

/*int main(void)
{
    int tab[5] = { 1, 2, 3, 4, 5 };
	int	i = 0;
	printf("tableau initial ");
	while (i <= 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
    ft_rev_int_tab(tab, 5);
	printf("tableau apres fct ");
	i = 0;
	while (i <= 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
    return (0);
}*/
