/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:06:13 by chdonnat          #+#    #+#             */
/*   Updated: 2024/08/02 08:41:09 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

long	ft_atoi_base(char *str, char *base);
int		ft_control(char *str, int len);
long	ft_strlen(char *str);

char	*ft_rev_str(char *str, int size)
{
	int	temp;
	int	down;
	int	up;

	down = 0;
	up = size - 1;
	while (down < up)
	{
		temp = str[up];
		str[up] = str[down];
		str[down] = temp;
		down++;
		up--;
	}
	return (str);
}

char	*ft_putnbr_base(long nbr, char *base, char *dest, int sign)
{
	int		i;

	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		sign = 1;
	}
	while (nbr > 0)
	{
		dest[i] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		i++;
	}
	if (sign == 1)
	{
		dest[i] = '-';
		i++;
	}
	dest[i] = '\0';
	return (ft_rev_str(dest, ft_strlen(dest)));
}

int	ft_verif(char *base_from, char *base_to)
{
	if (ft_control(base_from, ft_strlen(base_from)) == 0
		|| ft_control(base_to, ft_strlen(base_to)) == 0
		|| ft_strlen(base_to) < 2 || ft_strlen(base_from) < 2)
		return (0);
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	char	*dest;
	int		sign;

	if (ft_verif(base_from, base_to) == 0)
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	sign = 0;
	if (number < 0)
	{
		number = -number;
		sign = 1;
	}
	dest = (char *) malloc (36 * sizeof (char));
	if (dest == NULL)
		return (NULL);
	if (number == 0)
	{
		dest[0] = base_to[0];
		dest[1] = '\0';
		return (dest);
	}
	dest = ft_putnbr_base(number, base_to, dest, sign);
	return (dest);
}
/*
int	main(void)
{
	char	nbr[] = "-2147483648";
	char	base_from[] = "0123456789";
	char	base_to[] = "01";

	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
*/
