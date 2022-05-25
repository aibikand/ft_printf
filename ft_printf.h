/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:48:52 by aibikand          #+#    #+#             */
/*   Updated: 2022/05/25 12:04:10 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_printf(char const *str, ...);
int		ft_my_putchar(char c);
int		ft_my_putstr(char *str);
int		ft_my_putnbr(int numb);
int		ft_put_nbr(unsigned int numb);
int		ft_hexa_lowercase(unsigned long int numb, char c);
int		ft_hexa_capital(unsigned long int numb, char c);
#endif
