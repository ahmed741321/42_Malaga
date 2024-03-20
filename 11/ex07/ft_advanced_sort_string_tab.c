/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:51:06 by cacharle          #+#    #+#             */
/*   Updated: 2024/03/20 13:51:59 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sorted(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[i + 1] != NULL)
	{
		if ((*cmp)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*tmp;

	while (!sorted(tab, cmp))
	{
		i = 0;
		while (tab[i + 1] != NULL)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
