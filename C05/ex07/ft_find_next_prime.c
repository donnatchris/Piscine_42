/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:44:45 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/29 12:47:56 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	n;

	n = 0;
	printf("%d a comme prochain nombre premier %d\n", n, ft_find_next_prime(n));
	n = 1;
	printf("%d a comme prochain nombre premier %d\n", n, ft_find_next_prime(n));
	n = 3;
	printf("%d a comme prochain nombre premier %d\n", n, ft_find_next_prime(n));
	n = 6;
	printf("%d a comme prochain nombre premier %d\n", n, ft_find_next_prime(n));
	n = 11;
	printf("%d a comme prochain nombre premier %d\n", n, ft_find_next_prime(n));
	n = 20;
	printf("%d a comme prochain nombre premier %d\n", n, ft_find_next_prime(n));
	n = 30;
	printf("%d a comme prochain nombre premier %d\n", n, ft_find_next_prime(n));
	n = 80;
	printf("%d a comme prochain nombre premier %d\n", n, ft_find_next_prime(n));
	return (0);
}
*/
