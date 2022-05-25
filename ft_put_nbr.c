/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:45:51 by aibikand          #+#    #+#             */
/*   Updated: 2022/05/25 12:03:35 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(unsigned int numb)
{
	int	stock;

	stock = 0;
	if (numb >= 10)
	{
		stock += ft_put_nbr(numb / 10);
	}
	numb = numb % 10;
	if (numb < 10)
	{
		stock += ft_my_putchar(numb + '0');
	}
	return (stock);
}
/*
 int	main(void)
{
	ft_put_nbr(-2859);
	return (0);
} */
