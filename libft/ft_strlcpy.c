/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:23:53 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/20 17:49:25 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	if (size == 0)
	{
		return (lensrc);
	}
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lensrc);
}

// int	main(void)
// {
// 	char	source[] = "6";
// 	char	destination[] = "Hola!";
// 	int		source_length;
// 	source_length = ft_strlcpy(destination, source, -1);
// 	printf("This is length of source after ft_strlcpy: %i\n", source_length);
// 	printf("This is destination after ft_strlcpy: %s.\n", destination);
// 	// source_length = strlcpy(destination, source, -1);
// 	// printf("This is length of source after strlcpy: %i\n", source_length);
// 	// printf("This is destination after strlcpy: %s", destination);
// 	return (0);
// }
