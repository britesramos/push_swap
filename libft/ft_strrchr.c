/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 18:07:05 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/23 16:51:48 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	len = ft_strlen(s);
	ch = c;
	if (ch == 0)
		return ((char *) &s[len]);
	while (len--)
	{
		if (s[len] == ch)
			return ((char *) &s[len]);
	}
	return (0);
}

// int	main(void)
// {
// 	const char	string[] = "tripouille";
// 	const int	ch = 'l' + 256;
// 	char		*ret1;
// 	char		*ret2;

// 	ret1 = strrchr(string, ch);
// 	printf("String after %c is - %s\n", ch, ret1);
// 	ret2 = ft_strrchr(string, ch);
// 	printf("String after %c is - %s\n", ch, ret2);
// 	return (0);
// }
