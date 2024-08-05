/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:44:32 by chdonnat          #+#    #+#             */
/*   Updated: 2024/08/04 11:47:43 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_control(char *str)
{
	int	i;

	i = 0;
	if (!(str[0] >= '0' && str[0] <= '9'))
		return (0);
	if (ft_strlen(str) == 2)
	{
		if (!(str[0] >= '1' && str[0] <= '9'))
			return (0);
		if (str[0] != '1' && str[1] != '0')
			return (0);
	}
	if (ft_strlen(str) > 2)
	{
		if (str[0] != '1')
			return (0);
		i++;
		while (str[i])
		{
			if (str[i] != '0')
				return (0);
			i++;
		}
	}
	return (1);
}
