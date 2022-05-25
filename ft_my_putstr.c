/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:21:21 by aibikand          #+#    #+#             */
/*   Updated: 2022/05/25 12:03:13 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_my_putstr(char *str)
{
	int	i;
	int	stock;

	i = 0;
	stock = 0;
	if (!str)
	{
		return (ft_my_putstr("(null)"));
	}
	while (str[i])
	{
		stock += ft_my_putchar(str[i]);
		i++;
	}
	return (stock);
}
/*
 int	main(void)
{
    char    str[5];
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    ft_my_putstr(str);
    return (0);
}
 */
