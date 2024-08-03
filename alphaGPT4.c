#include "struct.h"
#include <unistd.h>


#define MAX_TAB_SIZE 1000


int	str_len(char *str);

void	ft_is_hundred(char *str, t_dic *tab)
{
	int	j;

	j = 0;
	while (*str != tab[j].key[0] && j < MAX_TAB_SIZE)
		j++;
	if (*str >= '2' && *str <= '9')
	{
		write(1, tab[j].value, str_len(tab[j].value));
		write(1, " ", 1);
	}
	if (*str != '0')
	{
		write(1, tab[28].value, str_len(tab[28].value));
		write(1, " ", 1);
	}
}

void	ft_is_ten(char *str, t_dic *tab)
{
	int	j;

	if (*str >= '2' && *str <= '9')
	{
		j = 20;
		while (*str != tab[j].key[0] && j < MAX_TAB_SIZE)
			j++;
		write(1, tab[j].value, str_len(tab[j].value));
		write(1, " ", 1);
	}
	if (*str == '1')
	{
		j = 10;
		str++;
		while (*str != tab[j].key[1] && j < MAX_TAB_SIZE)
			j++;
		write(1, tab[j].value, str_len(tab[j].value));
		write(1, " ", 1);
		str--;
	}
}

void	ft_is_unit(char *str, t_dic *tab)
{
	int	j;

	str--;
	if (*str == '1')
	{
		str++;
		return;
	}
	str++;
	if (*str >= '1' && *str <= '9')
	{
		j = 0;

		while (*str != tab[j].key[0] && j < MAX_TAB_SIZE)
			j++;
		write(1, tab[j].value, str_len(tab[j].value));
		write(1, " ", 1);
	}
}

void	ft_print(char *str, t_dic *tab)
{
	int		len; 

	len = str_len(str);
	if (*str == '0' && len == 1)
	{
		write(1, tab[0].value, str_len(tab[0].value));
		write(1, "\n", 1);
		return;
	}
	while (len > 1)
	{
		if (len % 3 == 0)
			ft_is_hundred(str, tab);
		if (len % 3 == 2)
			ft_is_ten(str, tab);
		if (len % 3 == 1)
			ft_is_unit(str, tab);
		str++;
		len--;
	}
	ft_is_unit(str, tab);
	write(1, "\n", 1);
}

