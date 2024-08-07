/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:56:18 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/18 16:43:25 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	modulo;

	div = *a / *b;
	modulo = *a % *b;
	*a = div;
	*b = modulo;
}

/*void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 9;
	b = 5;
	ptr_a = &a;
	ptr_b = &b;
	ft_ultimate_div_mod (ptr_a, ptr_b);
	ft_putchar (a + 48);
	ft_putchar (b + 48);
	return (0);
}*/
