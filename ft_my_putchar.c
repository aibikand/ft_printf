/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_putchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:33:30 by aibikand          #+#    #+#             */
/*   Updated: 2022/05/25 12:03:19 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_my_putchar(char c)
{
	int	stock;

	stock = 0;
	stock += write(1, &c, 1); //igualo stock al resultado del bucle de write con (+=),
	return (stock);            //evitando malloc y retorna así stock
}
/* +=	Suma el valor del segundo operando al valor del primer operando;
almacena el resultado en el objeto especificado por el primer operando.
una manera de no usar malloc ni free */

/*  int	main (void)
{
	ft_my_putchar('a');
	ft_my_putchar('b');
	ft_my_putchar('c');
	ft_my_putchar('d');
	ft_my_putchar('e');
	ft_my_putchar('f');
	ft_my_putchar('g');
	ft_my_putchar('h');
	ft_my_putchar('i');
	ft_my_putchar('j');
	ft_my_putchar('k');
	ft_my_putchar('l');
	ft_my_putchar('m');
	ft_my_putchar('n');
	ft_my_putchar('o');
	ft_my_putchar('p');
	ft_my_putchar('q');
	ft_my_putchar('r');
	ft_my_putchar('s');
	ft_my_putchar('t');
	ft_my_putchar('u');
	ft_my_putchar('v');
	ft_my_putchar('w');
	ft_my_putchar('x');
	ft_my_putchar('y');
	ft_my_putchar('z');
	ft_my_putchar('\n');
	return (0);
} */
