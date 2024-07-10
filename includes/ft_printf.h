/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:44:12 by gabguerr          #+#    #+#             */
/*   Updated: 2024/06/03 14:51:58 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int	print_char(int c);
int	print_str(char *str);
int	ft_printf(char const *format, ...);
int	print_hexa(unsigned long long ptr);

int	ft_printf(const char *string, ...);
int	ft_strlen(const char *str);
int	ft_atoi(const char *str);

#endif
