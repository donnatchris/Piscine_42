/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 07:54:47 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/25 09:18:02 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	len;
	int	res;
	int	sign;

	len = ft_strlen(str);
	res = 0;
	i = 0;
	sign = 1;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		&& i < ft_strlen(str))
		i++;
	while ((str[i] == 43 || str[i] == 45) && i < len)
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	while (i < len && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
	return (res * sign);
}
/*
int	main(void)
{
	char	s1[] = "12345";
	char	s2[] = "-123";
	char	s3[] = "    --++-12345678";
	char	s4[] = "123 456";
	char	s5[] = "   -+qw12";
	char	s6[] = "  --- 12we45";

	printf("%s donne la valeur %d\n", s1, ft_atoi(s1));
	printf("%s donne la valeur %d\n", s2, ft_atoi(s2));
	printf("%s donne la valeur %d\n", s3, ft_atoi(s3));
	printf("%s donne la valeur %d\n", s4, ft_atoi(s4));
	printf("%s donne la valeur %d\n", s5, ft_atoi(s5));
	printf("%s donne la valeur %d\n", s6, ft_atoi(s6));
	return (0);
}
*/
