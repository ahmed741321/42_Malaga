/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:12:36 by ocartier          #+#    #+#             */
/*   Updated: 2024/03/20 13:56:15 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(int fd, char *str);
int		is_directory(char *filename);

void	put_nl(int cur, int argc, char *filename, int files_num)
{
	if (files_num > 1)
	{
		if (cur != argc - 1)
			ft_putstr(1, "\n");
		if (is_directory(filename) == 1)
			ft_putstr(1, "\n");
	}
}
