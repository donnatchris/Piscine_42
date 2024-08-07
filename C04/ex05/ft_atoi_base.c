/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:34:02 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/25 09:22:42 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

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

int	ft_convert(char c, char *base, int len_base)
{
	int	i;

	i = 0;
	while (i < len_base)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_calcul(int i, char *str, char *base)
{
	int	res;	

	res = 0;
	while (i < ft_strlen(str))
	{
		if (ft_convert(str[i], base, ft_strlen(base)) < 0)
			break ;
		res = res * ft_strlen(base) + ft_convert(str[i], base, ft_strlen(base));
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	sign;

	if (ft_control(base, ft_strlen(base)) == 0)
		return (0);
	res = 0;
	i = 0;
	sign = 1;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		&& i < ft_strlen(str))
		i++;
	while ((str[i] == 43 || str[i] == 45) && i < ft_strlen(str))
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	return (ft_calcul(i, str, base) * sign);
}
/*
int	main(int argc, char *argv[])
{
	int	nbr;

	if (argc != 3)
		return (1);
	nbr = ft_atoi_base(argv[1], argv[2]);
	printf("Le resultat est: %d\n", nbr);
	return (0);
}
*/
