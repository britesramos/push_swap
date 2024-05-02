/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 11:38:13 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/23 14:34:20 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		lens1;
	int		lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ns = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!ns)
		return (0);
	else if (ns)
	{
		ft_strlcpy(ns, s1, lens1 + 1);
		ft_strlcat(ns, s2, lens1 + lens2 + 1);
	}
	return (ns);
}

// int	main(void)
// {
// 	char	*string1;
// 	char	*string2;
// 	char *ptr;

// 	string1 = "Hello ";
// 	string2 = "World!";
// 	ptr = ft_strjoin(string1, string2);
// 	printf("This is the new string: %s.", ptr);
// 	free (ptr);
// 	return (0);
// }
