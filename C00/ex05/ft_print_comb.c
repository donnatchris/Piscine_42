/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:16:34 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/31 11:26:15 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first < '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				write (1, &first, 1);
				write (1, &second, 1);
				write (1, &third, 1);
				write (1, ", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
	write (1, "789\n", 4);
}
/*
int	main(void)
{
	ft_print_comb ();
	return (0);
}
*/
