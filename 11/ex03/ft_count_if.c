/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:35:34 by cacharle          #+#    #+#             */
/*   Updated: 2024/03/20 13:50:35 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	counter;

	counter = 0;
	while (length-- > 0)
		if ((*f)(*tab++))
			counter++;
	return (counter);
}
