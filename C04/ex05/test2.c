#include <stdio.h>
#include <unistd.h>

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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	len_str;
	int len_base;
	int	res;
	int	sign;

	len_str = ft_strlen(str);
	len_base = ft_strlen(base);
	if (ft_control(base, len_base) == 0)
		return (0);
	res = 0;
	i = 0;
	while (str[i++] == 32 && i < len_str)
	while ((str[i] == 43 || str[i] == 45) && i < len_str)
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	while (i++ < len_str)
	{
		if (ft_convert(str[i], base, len_base) < 0)
			break ;
		res = (res * len_base) + ft_convert(str[i], base, len_base);
	}
	return (res * sign);
}

int	main(int argc, char *argv[])
{
	int	nbr;

	if (argc != 3)
		return (1);
	nbr = ft_atoi_base(argv[1], argv[2]);
	printf("Le resultat est: %d\n", nbr);
	return (0);
}
