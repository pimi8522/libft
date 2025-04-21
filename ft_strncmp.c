/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:52:30 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/21 15:16:44 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && i < num)
	{
		if ((str1[i] - str2[i]) != 0)
		{
			return (str1[i] - str2[i]);
		}
		else
			i++;
	}
	return (0);
}
