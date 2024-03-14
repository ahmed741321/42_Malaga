/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 08:05:45 by aasaad-h          #+#    #+#             */
/*   Updated: 2024/03/13 11:08:52 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	mid;
	int	square;

	if (nb <= 0)
		return (0);
	left = 1;
	right = nb;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		square = mid * mid;
		if (square == nb)
			return (mid);
		else if (square < nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}
