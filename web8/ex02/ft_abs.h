/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:24:10 by aasaad-h          #+#    #+#             */
/*   Updated: 2024/03/14 11:54:34 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (((Value) < 0) * -(Value) + ((Value) >= 0) * (Value))

# define IS_NEGATIVE(Value) ((Value) < 0)

# define NEGATE(Value) (-(Value))

# define POSITIVE(Value) (Value)

#endif
