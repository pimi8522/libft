/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:52:12 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/11 10:52:19 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
    destlen = ft_strlen(dst);
	if (destlen == dstsize)
		return(destlen + srclen);
	else if (dstsize >= (srclen + destlen))
	{
		while 
	}
    /* if dstsize is big enough to accomodate both src and dst */
    /* concatenate src at the end of dst */
    /* else, concatenate dstsize character maximum */
    return (/* length of src + length of dst */);
}
