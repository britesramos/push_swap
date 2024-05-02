/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 10:20:24 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 12:52:56 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
		ft_memcpy(cdest, csrc, n);
	else if (dest > src)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	string[] = "Hello World!";
// 	// puts(memmove(&string[0], &string[6], 11));
// 	puts(ft_memmove(&string[0], &string[6], 11));
// 	return (0);
// }
