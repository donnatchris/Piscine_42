/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:06:13 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/24 17:12:42 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_control(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		if ((str[i] >= 0 && str [i] <= 32) || (str[i]) == 45
			|| (str[i] == 43) || (str[i]) == 127)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (len < 2 || ft_control(base, len) == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / len), base);
		ft_putnbr_base(-(nbr % len), base);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= len)
		ft_putnbr_base(nbr / len, base);
	ft_putchar(base[nbr % len]);
}
/*
int	main(void)
{
	ft_putnbr_base(255, "0123456789");
	write (1, "\n", 1);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write (1, "\n", 1);
	ft_putnbr_base(255, "poneyvif");
	write (1, "\n", 1);
	ft_putnbr_base(255, "01");
	write (1, "\n", 1);
	ft_putnbr_base(254, "$#@!");
	write (1, "\n", 1);
	ft_putnbr_base(255, "0123345678");
	write (1, "\n", 1);
	ft_putnbr_base(255, "-01234?56789");
	write (1, "\n", 1);
	ft_putnbr_base(255, "1");
	write (1, "\n", 1);
	ft_putnbr_base(255, "");
	write (1, "\n", 1);
	ft_putnbr_base(-2147483648, "01");
	write (1, "\n", 1);
	return (0);
}
*/
