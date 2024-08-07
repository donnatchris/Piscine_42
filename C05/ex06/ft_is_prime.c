/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:54:09 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/29 11:28:53 by chdonnat         ###   ########.fr       */
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
/*
int	main(void)
{
	int	n;

	n = 0;
	printf("%d est il premier? %d\n", n, ft_is_prime(n));
	n = 1;
	printf("%d est il premier? %d\n", n, ft_is_prime(n));
	n = 2;
	printf("%d est il premier? %d\n", n, ft_is_prime(n));
	n = 3;
	printf("%d est il premier? %d\n", n, ft_is_prime(n));
	n = 4;
	printf("%d est il premier? %d\n", n, ft_is_prime(n));
	n = 13;
	printf("%d est il premier? %d\n", n, ft_is_prime(n));
	n = 60;
	printf("%d est il premier? %d\n", n, ft_is_prime(n));
	n = 97;
	printf("%d est il premier? %d\n", n, ft_is_prime(n));
	return (0);
	return (0);
}
*/
