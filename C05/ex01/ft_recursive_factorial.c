/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:54:20 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/26 11:01:06 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (i < nb)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Factorielle de 0 est égal à %d\n", ft_recursive_factorial(0));
	printf("Factorielle de 1 est égal à %d\n", ft_recursive_factorial(1));
	printf("Factorielle de 2 est égal à %d\n", ft_recursive_factorial(2));
	printf("Factorielle de 3 est égal à %d\n", ft_recursive_factorial(3));
	printf("Factorielle de 4 est égal à %d\n", ft_recursive_factorial(4));
	return (0);
}
*/
