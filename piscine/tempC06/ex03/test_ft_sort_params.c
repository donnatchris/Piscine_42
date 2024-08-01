/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_sort_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:50:15 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/29 17:56:50 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_list(int argc, char **str)
	{
		int	i;

		i = 1;
		while (i < argc)
		{
			ft_putstr(str[i]);
			i++;
		}
		write(1, "\n*****\n", 7);
	}

void	ft_swap(char *s1, char *\*s2)
	{
		char *temp;

		temp = s1;
		*s1 = *s2;
		s2 = temp;
	}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int	i;
	int j;
	char	*temp;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(argv[i], argv[j]);
			//	temp = argv[i];
			//	argv[i] = argv[j];
			//	argv[j] = temp;
			}
			ft_print_list(argc, argv);
			j++;
		}
		i++;
	}
	i = 1;
/*	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}*/
	return (0);
}
