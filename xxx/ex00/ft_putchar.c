/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:30:50 by aasaad-h          #+#    #+#             */
/*   Updated: 2024/03/14 12:36:44 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar.c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
