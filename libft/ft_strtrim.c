/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 12:12:22 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 14:11:34 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		lens1;
	char	*cps1;

	i = 0;
	lens1 = ft_strlen(s1);
	k = lens1 - 1;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	while (ft_strchr(set, s1[k]) && k > i)
		k--;
	cps1 = malloc((k - i + 2) * sizeof(char));
	if (!cps1)
		return (0);
	ft_strlcpy(cps1, &s1[i], (k - i + 2));
	return (cps1);
}

// int	main(void)
// {
// 	char	*ptr;

// 	char	*string1 = "abcabcabc5aabbcc5aabbcc";
// 	char	*string2 = "abc";
// 	printf("This is ptr: %s", ptr = ft_strtrim(string1, string2));
// 	free(ptr);
// 	return (0);
// }
