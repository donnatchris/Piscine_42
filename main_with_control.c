/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:32:23 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/20 21:02:03 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

// Strlen
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

// AtoI
int	ft_string_to_int(const char s[])
{
	int	i;
	int	len;
	int	res;

	len = ft_strlen(s);
	res = 0;
	i = 0;
	while (i < len)
	{
		res = res * 10;
		res = res + s[i] - '0';
		i++;
	}
	return (res);
}


// Verif
int ft_control(const char string[])
{
	int	i;
	int	len;

	len = ft_strlen(string);
	if ((string[0] != '-') && ((string[0] <= '0' || string[0] >= '9')))
		return (1);
	i = 1;
	while (i < len)
	{
		if (string[i] <= '0' && string[i] >= '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
	
}

// Main
int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if ((ft_control(argv[1]) != 0) || (ft_control(argv[2]) != 0))
	{
		write(1, "Vous devez saisir des chiffres./n", 32);
		return (1);
	}

	x = ft_string_to_int(argv[1]);
	y = ft_string_to_int(argv[2]);

	

	if (argc != 3)
	{
		write(1, "Veuillez saisir 2 arguments.", 28);
		return (1);
	}	
	rush (x, y);
	return (0);
}
