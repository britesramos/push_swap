/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 17:15:41 by sramos        #+#    #+#                 */
/*   Updated: 2024/03/19 17:41:48 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

// int	main(void)
// {
// 	char	*string1;
// 	char	*string2;

// 	string1 = "abc";
// 	string2 = "abc";
// 	printf("%i\n", strncmp(string1, string2, 7));
// 	printf("%i\n", ft_strncmp(string1, string2, 7));
// 	return (0);
// }
