/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:16:57 by aibikand          #+#    #+#             */
/*   Updated: 2022/05/25 12:03:10 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_my_funtion(va_list arg, char x)
{
	int	stock;

	stock = 0;
	if (x == 'c')
		stock += ft_my_putchar(va_arg(arg, int));
	else if (x == '%')
		stock += ft_my_putchar('%');
	else if (x == 'd' || x == 'i')
		stock += ft_my_putnbr(va_arg(arg, int));
	else if (x == 'u')
		stock += ft_put_nbr(va_arg(arg, unsigned int));
	else if (x == 's')
		stock += ft_my_putstr(va_arg(arg, char *));
	else if (x == 'x')
		stock += ft_hexa_lowercase(va_arg(arg, unsigned int), x);
	else if (x == 'X')
		stock += ft_hexa_capital(va_arg(arg, unsigned int), x);
	else if (x == 'p')
		stock += ft_my_putstr("0x") + ft_hexa_lowercase(va_arg(arg,
					unsigned long long), x);
	return (stock);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		i;
	int		stock;

	va_start(arg, str);
	i = 0;
	stock = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			stock += ft_my_funtion(arg, str[i + 1]);
			i++;//i += 2   o    i == 2 entenderlo
		}
		else
		{
			stock += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(arg);
	return (stock);
}

/*  int	main(void)
{
	//char	*str = "hola";
	int 	org;
	int 	mio;
	org = printf("Org: %p\n", (void *)-14523);
	printf("bytes: %d\n", org);
	mio = ft_printf("Mio: %p\n", (void *)-14523);
	printf("bytes: %d\n", mio);
	return (0);
} */

/* int	main(void)
{
	ft_printf(" %c %c %c \n", '0', 0, '1');
	printf(" %c %c %c ", '0', 0, '1');
	ft_printf("%p\n", (void *)0);
	printf("%p\n", (void *)0);
	ft_printf("%p\n", (void *)14523);
	printf("%p\n", (void *)14523);
	return (0);
} */
/* int main()
{
    int data = 29;
    printf("%x\n", data);    // solo imprime datos
    printf("%0x\n", data);   // solo imprime datos ('0' por sí solo no tiene efecto)
    printf("%8x\n", data);   // imprimir en 8 de ancho y bloc con espacios en blanco
    printf("%08x\n", data);  // imprimir en 8 de ancho y rellenar con 0

    return 0;
} */

/* int	main (void)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 10 && j < 10)
	{
		ft_printf("%d\n", i + j);
		printf("%d\n", i + j);
		i++;
		j++;
	}
	return (0);
} */
