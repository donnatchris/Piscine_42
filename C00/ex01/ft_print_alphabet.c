/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 07:56:18 by chdonnat          #+#    #+#             */
/*   Updated: 2024/07/17 09:48:49 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet ();
	return (0);
}*/

void	ft_print_alphabet(void)
{
	char	charactere;

	charactere = 'a';
	while (charactere <= 'z')
	{
		write (1, &charactere, 1);
		charactere++;
	}
}
