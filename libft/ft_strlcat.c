/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 12:01:49 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 12:58:58 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = 0;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	while (dst[dstlen] != '\0')
		dstlen++;
	if (size == 0)
		return (srclen);
	if (size <= dstlen)
		return (srclen + size);
	while (i + dstlen < (size - 1) && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// int	main(void)
// {
// 	char	source[] = "lorem ipsum dolor sit amet";
// 	char	dest[] = "rrrrrrrrrrrrrrr";
// 	// ft_memset(dest, 'r', 15);
// 	// int		destination_lenght = ft_strlcat(dest, source, 5);
// 	// printf("This is destination after ft_strlcat: %s\n", dest);
// 	// printf("This is destination lenght: %i\n", destination_lenght);
// 	int		destination_lenght = strlcat(dest, source, 5);
// 	printf("This is destination after strlcat: %s\n", dest);
// 	printf("This is destination lenght: %i\n", destination_lenght);
// 	return (0);
// }
