#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "L'alcool ne resoud pas les problemes. Cela dit, l'eau et le lait non-plus.";
	ft_putstr(str);
	return (0);
}
