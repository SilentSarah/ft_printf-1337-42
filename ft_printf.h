/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:25:59 by hmeftah           #+#    #+#             */
/*   Updated: 2022/10/20 19:29:59 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include "./includes/libft.h"

int		ft_printf(const char *format, ...);
int		ft_putbase_fd_lower(unsigned int n);
int		ft_putnbr_fd_unsigned(unsigned int n);
int		ft_putbase_fd(unsigned int n);
int		ft_putadress(void *ptr);

#endif