/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:48:25 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/14 10:19:39 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char * ft_strrchr ( const char * str, int character )
{
	int	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	if (character == '\0')
		return (&str[i]);
	while (i >= 0)
	{
		if (str[i] == (char)character)
			return (&str[i]);
		if (i == 0)
			break;
		i--;
	}
	return (NULL);
}
