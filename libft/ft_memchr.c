/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:45:21 by sramos            #+#    #+#             */
/*   Updated: 2023/10/10 12:45:22 by sramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*len;

	len = (unsigned char *)s;
	while (n--)
	{
		if (*len == (unsigned char)c)
			return (len);
		len++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	string[] = "Hello World!";
// 	const char	ch = 'l';
// 	char		*ret1;
// 	char		*ret2;
// 	ret1 = memchr(string, ch, 5);
// 	printf("Memory after %c is - %s\n", ch, ret1);
// 	ret2 = ft_memchr(string, ch, 5);
// 	printf("Memory after %c is - %s\n", ch, ret2);
// 	return (0);
// }
