/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/13 10:59:06 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/20 13:14:50 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_plus1(unsigned int i, char *s)
// {
// 	s[i] = s[i] + 1;
// }

// int	main()
// {
// 	char string[] = "12345";
// 	printf("This is string: %s.\n", string);
// 	ft_striteri(string, ft_plus1);
// 	printf("This is string: %s.\n", string);
// 	return (0);
// }

// void print_char(unsigned int i, char *c)
// {
//     printf("Character at index %d is %c\n", i, *c);
// }

// int main()
// {
//     char str[] = "Hello, World!";
//     ft_striteri(str, print_char);
//     return 0;
// }