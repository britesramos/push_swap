/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 17:53:11 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/12 10:22:44 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*ns;
	int		len;

	len = ft_strlen(s);
	ns = malloc(len + 1);
	if (!ns)
		return (0);
	if (ns)
		ft_strlcpy(ns, s, len + 1);
	return (ns);
}

// int	main(void)
// {
// 	char	string1[] = "Hello World!";
// 	// printf("%s\n", strdup(string1));
// 	// free(strdup(string1));

// 	printf("%s", ft_strdup(string1));
// 	free(ft_strdup(string1));
// 	return (0);
// }
