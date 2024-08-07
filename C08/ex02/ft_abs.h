/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:32:22 by chdonnat          #+#    #+#             */
/*   Updated: 2024/08/06 13:03:12 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H

# define FT_ABS_H

# define NEG(Value) (Value < 0)

# define POS(Value) (Value >= 1)

# define ABS(Value) ((Value) * (Value > 0) - (Value) * (Value < 0))

#endif
