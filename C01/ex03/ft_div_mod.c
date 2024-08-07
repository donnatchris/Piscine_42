/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:33:52 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/18 15:51:01 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*void	putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *ptr_div;
	int *ptr_mod;

	a = 9;
	b = 5;
	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod (a, b, ptr_div, ptr_mod);
	putchar (div + 48);
	putchar (mod + 48);
	return (0);
}*/
