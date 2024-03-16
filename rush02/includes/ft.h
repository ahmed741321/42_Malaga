/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmet <ahmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:45:52 by aasaad-h          #+#    #+#             */
/*   Updated: 2024/03/17 00:05:11 by ahmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_list
{
	int		nb;
	char	*val;
}			t_list;
int			ft_atoi(const char *str);
char		*ft_strdup(char *src);
void		ft_putstr(char *str);
char		*ft_getnb(int fd);
char		*ft_getval(int fd, char *c);
t_list		*process(char *file);
char		*ft_itoa(int n);

#endif
