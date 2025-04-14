/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:52:12 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/14 10:12:23 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen >= dstsize)
		return (destlen + srclen);
	while (src[i] != '\0' && (destlen + i + 1) < dstsize)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
