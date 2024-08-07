/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:41:27 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/29 10:23:26 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("%d puissance %d vaut %d\n", 4, 3, ft_recursive_power(4, 3));
	printf("%d puissance %d vaut %d\n", -4, 2, ft_recursive_power(-4, 2));
	printf("%d puissance %d vaut %d\n", 6, 7, ft_recursive_power(6, 7));
	printf("%d puissance %d vaut %d\n", 0, 0, ft_recursive_power(0, 0));
	printf("%d puissance %d vaut %d\n", 4, 0, ft_recursive_power(4, 0));
	printf("%d puissance %d vaut %d\n", 4, -3, ft_recursive_power(4, -3));
	return (0);
}
*/
