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

/*void	ft_putnbr_base(int nbr, char *base)
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
}*/

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
	return (0);
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
	sign = 1;
	while (str[i] == 32 && i < len_str)
		i++;
	while ((str[i] == 43 || str[i] == 45) && i < len_str)
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	while (i < len_str)
	{
		res = res * len_base;
		res = res + ft_convert(str[i], base, len_base);
		i++;
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
