/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lowercase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:16:02 by aibikand          #+#    #+#             */
/*   Updated: 2022/05/25 12:03:22 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lowercase(unsigned long int numb, char c)
{
	int stock;

	stock = 0;
	if (c == 'x' || c =='p')
	{
		if (numb >= 16)
		{
			stock += ft_hexa_lowercase(numb / 16, c);
		}
		stock += ft_my_putchar("0123456789abcdef"[numb % 16]);
	}
	return(stock);
}
/* "0123456789abcdef" combierte en hexadecimal en minúsculas */

/*  int main(void)
{
	ft_hexa_lowercase(0xFFF23FF, 'x');
	return (0);
} */
