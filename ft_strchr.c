/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:38:04 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/12 19:46:22 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char * ft_strchr ( const char * str, int character )
{
	size_t	i;

	i = 0;
	if (!str)
        return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char)character)
			return (&str[i]);
		i++;
	}
	if (character == '\0')
        return (&str[i]);
	return (NULL);
}