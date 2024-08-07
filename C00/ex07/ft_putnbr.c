/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:12:28 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/18 08:44:28 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putdigit(int n)
{
	ft_putchar (n + 48);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
			ft_putnbr (nb / 10);
		ft_putdigit(nb % 10);
	}
}

/*int	main(void)
{
	ft_putnbr (989);
	write (1, "\n", 1);
	ft_putnbr (-95465442);
	write (1, "\n", 1);
	ft_putnbr (0);
	write (1, "\n", 1);
	ft_putnbr (-2147483648);
	write (1, "\n", 1);
	ft_putnbr (2147483647);
	write (1, "\n", 1);
	return (0);
}*/
