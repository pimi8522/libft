/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:38:25 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/16 14:42:51 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1 - count words
//2 - malloc tamanho strlen - n delimiters
//3 - write to strings
static	int ft_count_words(char *str, char delimiter)
{
	int	i;
	int	in_word;
	int	num_words;

	i = 0;
	in_word = 0;
	num_words = 0;
	while (str[i])
	{
		if (ft_isascii(str[i]) && str[i] != delimiter && in_word == 0)
		{
			in_word = 1;
			num_words++;
		}
		if (str[i] == delimiter)
			in_word = 0;
		i++;
	}
	return (num_words);
}
char *getwords(char *str, char c, int x)
{
	int i;
	int len;
	int start;
	char *word;

	while (str[x] && str[x] == c)
		x++;
	start = x;
	while (str[len + x] != c) 
		len++;
	word = malloc(len + 1);
	while(i < len)
		word[i] = str[start + i];
	word[len] = NULL;
	x += len;
	return (word);
}

void create_stuff( char **argv, char *str, char c, int count)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < count + 1)
		argv[y] = getwords(str, c, &x);
	argv[y] = NULL;
}
char **ft_split(char const *s, char c)
{
	int count;
	char **newstring;
	
	count =ft_count_words(s, c);
	newstring = malloc(sizeof(char *) * (count + 1));
	create_stuff(newstring, s, c, count);

}
