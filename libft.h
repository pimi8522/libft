/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:55:27 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/10 13:24:05 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

int	ft_isalpha(int  ch);
int	ft_isdigit(int	arg);
int	ft_isalnum (int	arg);
int	ft_isprint (int	c);
size_t	ft_strlen(const char	*str);
int	ft_toupper(int	ch);
int	ft_tolower(int	ch);
int	ft_atoi (const char	*str);

#endif