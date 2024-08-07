/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:03:23 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/29 12:58:20 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	int n;

	n = 1;
	printf("Le %d eme elemet de la suite de fibo est %d\n", n , ft_fibonacci(n));
	n = 2;
	printf("Le %d eme elemet de la suite de fibo est %d\n", n , ft_fibonacci(n));
	n = 3;
	printf("Le %d eme elemet de la suite de fibo est %d\n", n , ft_fibonacci(n));
	n = -1;
	printf("Le %d eme elemet de la suite de fibo est %d\n", n , ft_fibonacci(n));
	n = -2;
	printf("Le %d eme elemet de la suite de fibo est %d\n", n , ft_fibonacci(n));
	return (0);
}
*/
