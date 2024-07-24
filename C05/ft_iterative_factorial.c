#include <stdio.h>

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
	while (str[i] == 32 && i < len)
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

int ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	nb;
	int	result;

	if (argc != 2)
		return (0);
	nb = ft_atoi (argv[1]);
	result = ft_iterative_factorial(nb);
	printf("Factorielle de %d est égal à %d\n", nb, result);
	return (0);
}
