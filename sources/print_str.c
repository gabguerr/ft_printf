/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:59:43 by gabguerr          #+#    #+#             */
/*   Updated: 2024/06/03 13:00:32 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_str(char *str)
{
	int	cont;

	if (!str)
		return (print_str("(null)"));
	cont = 0;
	while (*str)
	{
		print_char((int)*str);
		++str;
		++cont;
	}
	return (cont);
}
