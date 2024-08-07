/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 07:39:12 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/24 07:49:53 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
	}
	ft_putchar ((nb % 10) + 48);
}
/*
int	main(void)
{
	ft_putnbr (42);
	write (1, "\n", 1);
	ft_putnbr (-1645);
	write (1, "\n", 1);
	ft_putnbr (-2147483648);
	write (1, "\n", 1);
	return (0);
}
*/
