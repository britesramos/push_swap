/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 16:08:03 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/12 10:49:54 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = '\0';
	}
}

// int	main(void)
// {
// 	char    string[] = "Hello World!";
// 	printf("%s\n", string);
// 	ft_bzero(string, 5);
// 	printf("%s", string);
// 	// bzero(string, 5);
// 	printf("%s", string);
// 	return (0);
// }
