#include "struct.h"
#include <unistd.h>

int	ft_strlen(char *str);

void	ft_is_hundred(char *str, t_dic *tab)
{
	int	j;

	j = 0;
	while (*str != tab[j].key[0])
		j++;
	if (*str >= '2' && *str <= '9')
	{
		write(1, tab[j].value, ft_strlen(tab[j].value));
		write(1, " ", 1);
	}
	if (*str != '0')
	{
		j = 0;
		while (tab[j].key_len != 3)
		j++;
		write(1, tab[28].value, ft_strlen(tab[28].value));
		write(1, " ", 1);
	}
}

void	ft_is_ten(char *str, t_dic *tab)
{
	int	j;

	if (*str >= '2' && *str <= '9')
	{
		j = 0;
		while (*str != tab[j].key[0] || tab[j].key_len != 2)
			j++;
		write(1, tab[j].value, ft_strlen(tab[j].value));
		write(1, " ", 1);
	}
	if (*str == '1')
	{
		j = 0;
		str++;
		while (*str != tab[j].key[1] || tab[j].key_len != 2)
			j++;
		write(1, tab[j].value, ft_strlen(tab[j].value));
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
		while (*str != tab[j].key[0] || tab[j].key_len != 1)
			j++;
		write(1, tab[j].value, ft_strlen(tab[j].value));
		write(1, " ", 1);
	}
}

void	ft_is_big(char *str, t_dic *tab, int len)
{
	int	j;

	j = 0;
	if (*str == '0' && str[-1] == '0' && str[-2] == '0')
		return;
	while (len != tab[j].key_len)
		j++;
	write(1, tab[j].value, ft_strlen(tab[j].value));
	write(1, " ", 1);
}

void	ft_print(char *str, t_dic *tab)
{
	int		len; 

	len = ft_strlen(str);
	if (*str == '0' && len == 1)
	{
		write(1, tab[0].value, ft_strlen(tab[0].value));
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
		{
			ft_is_unit(str, tab);
			ft_is_big(str, tab, len);
		}
		str++;
		len--;
	}
	ft_is_unit(str, tab);
	write(1, "\n", 1);
}
