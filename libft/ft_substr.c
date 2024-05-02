/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 13:03:35 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/26 12:35:05 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = NULL;
	if (s == NULL)
		return (0);
	if (start > ft_strlen(s))
		return (ft_substr(s, 0, 0));
	if (start + len < ft_strlen(s))
		substr = malloc((len + 1) * sizeof(char));
	else
		substr = malloc((ft_strlen(s) - start + 1) * sizeof(char));
	if (!substr)
		return (0);
	while (len-- && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char string[] = "0123456789";
// 	char *ptr = ft_substr(string, 9, 10);
// 	printf("This is the substring: %s\n", ptr);
// 	free(ptr);
// 	return (0);
// }
