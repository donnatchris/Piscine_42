/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:39:14 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/25 09:48:01 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Factorielle de 0 est égal à %d\n", ft_iterative_factorial(0));
	printf("Factorielle de 1 est égal à %d\n", ft_iterative_factorial(1));
	printf("Factorielle de 2 est égal à %d\n", ft_iterative_factorial(2));
	printf("Factorielle de 3 est égal à %d\n", ft_iterative_factorial(3));
	printf("Factorielle de 4 est égal à %d\n", ft_iterative_factorial(4));
	return (0);
}
*/
