/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_capital.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:25:53 by aibikand          #+#    #+#             */
/*   Updated: 2022/05/25 12:03:24 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_capital(unsigned long int numb, char c)
{
	int	stock;

	stock = 0;
	if (c == 'X')
	{
		if (numb >= 16)
		{
			stock += ft_hexa_capital(numb / 16, c);
		}
		stock += ft_my_putchar("0123456789ABCDEF"[numb % 16]);
	}
	return (stock);
}
/* "0123456789ABCDEF" combierte en hexadecimal en mayúsculas */

/*   int main(void)
 {
 	ft_hexa_capital(0xffffffffff, 'X');
 	return (0);
 } */
