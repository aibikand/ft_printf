/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:57:43 by aibikand          #+#    #+#             */
/*   Updated: 2022/05/25 12:03:16 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_my_putnbr(int numb)
{
	int	stock;

	stock = 0;
	if (numb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (numb < 0)
	{
		stock += write(1, "-", 1);
		numb = -numb;
	}
	if (numb >= 10)
	{
		stock += ft_my_putnbr(numb / 10);
	}
	numb = numb % 10;
	if (numb < 10)
	{
		stock += ft_my_putchar(numb + '0');
	}
	return (stock);
}

/*  int	main(void)
{
	ft_my_putnbr(-2147393648);
	return (0);
} */
