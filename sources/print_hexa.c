/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:00:14 by gabguerr          #+#    #+#             */
/*   Updated: 2024/06/03 13:00:08 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_hexa(unsigned long long ptr)
{
	char	*symbols;
	int		cont;

	cont = 0;
	symbols = "0123456789abcdef";
	if (ptr >= 16)
		cont += print_hexa(ptr / 16);
	print_char(symbols[ptr % 16]);
	cont++;
	return (cont);
}
