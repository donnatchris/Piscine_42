/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:29:23 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/29 12:48:53 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	while (res <= nb)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}
/*
int	main(void)
{
	int	n;

	n = 1;
	printf("racine de %d vaut %d\n", n, ft_sqrt(n));
	n = 2;
	printf("racine de %d vaut %d\n", n, ft_sqrt(n));
	n = -4;
	printf("racine de %d vaut %d\n", n, ft_sqrt(n));
	n = 9;
	printf("racine de %d vaut %d\n", n, ft_sqrt(n));
	n = 16;
	printf("racine de %d vaut %d\n", n, ft_sqrt(n));
	return (0);
}
*/
