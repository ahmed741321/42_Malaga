/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:17:12 by cacharle          #+#    #+#             */
/*   Updated: 2024/03/20 13:50:18 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*mapped;

	mapped = (int *)malloc(sizeof(int) * length);
	if (mapped == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		mapped[i] = (*f)(tab[i]);
		i++;
	}
	return (mapped);
}
