/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:01:47 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/29 08:35:09 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d puissance %d vaut %d\n", 4, 3, ft_iterative_power(4, 3));
	printf("%d puissance %d vaut %d\n", -4, 2, ft_iterative_power(-4, 2));
	printf("%d puissance %d vaut %d\n", 6, 7, ft_iterative_power(6, 7));
	printf("%d puissance %d vaut %d\n", 0, 0, ft_iterative_power(0, 0));
	printf("%d puissance %d vaut %d\n", 4, 0, ft_iterative_power(4, 0));
	printf("%d puissance %d vaut %d\n", 4, -3, ft_iterative_power(4, -3));
	return (0);
}
*/
