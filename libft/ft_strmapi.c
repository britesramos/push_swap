/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/13 10:58:05 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/23 13:29:22 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// char	addone(unsigned int i, char c)
// {
// 	return (i + c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ns;
	unsigned int	i;

	ns = NULL;
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ns = malloc(ft_strlen(s) + 1);
	if (!ns)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns [i] = '\0';
	return (ns);
}

// int	main(void)
// {
// 	char *string = "1234";
// 	printf("This is new string: %s.\n", ft_strmapi(string, addone));
// 	return (0);
// }
