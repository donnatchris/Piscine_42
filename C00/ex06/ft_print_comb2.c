/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:08:56 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/18 13:25:47 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_number(int d)
{
	int	ten;
	int	digit;

	ten = (d / 10) + 48;
	digit = (d % 10) + 48;
	write (1, &ten, 1);
	write (1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	number2 = 1;
	while (number1 <= 98)
	{
		while (number2 <= 99)
		{
			ft_put_number(number1);
			write (1, " ", 1);
			ft_put_number(number2);
			if (number1 != 98 || number2 != 99)
				write (1, ", ", 2);
			number2++;
		}
		number1++;
		number2 = number1 + 1;
	}
	write (1, "\n", 1);
}

/*int	main(void)
{
	ft_print_comb2 ();
	return (0);
}*/
