#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	main(void)
{
	char	str[] = "Chaine de 23 caracteres";
	printf("%s\n", str);
	printf("la fct retourne: %d\n", ft_strlen(str));
	return (0);
}
