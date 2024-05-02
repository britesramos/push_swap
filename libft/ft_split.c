/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/13 10:54:48 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 14:29:34 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_c_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && i != 0)
			count++;
		if (s[i + 1] == '\0' && s[i] != c)
			count++;
		i++;
		if (ft_strchr(s, c) == 0)
			return (count = 1);
	}
	return (count);
}

static int	ft_substrlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int	ft_free(char **result, int j)
{
	if (result[j] == NULL)
	{
		while (j--)
			free (result[j]);
		free (result);
		return (0);
	}
	return (1);
}

static char	**ft_parsing(char const *s, char c, char **result)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && i == 0)
		{
			result[j] = ft_substr(s, 0, ft_substrlen(&s[i], c));
			if (ft_free(result, j) == 0)
				return (0);
			j++;
		}
		else if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			result[j] = ft_substr(s, i + 1, ft_substrlen(&s[i + 1], c));
			if (ft_free(result, j) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		c_count;
	char	**result;

	if (ft_strlen(s) == 0)
		c_count = 0;
	else
		c_count = ft_c_count(s, c);
	result = ft_calloc ((c_count + 1), sizeof(char *));
	if (result == NULL)
		return (NULL);
	return (ft_parsing(s, c, result));
}

// int	main(void)
// {
// 	char	*str = "t";
// 	char	**ptr;
// 	int i;

// 	i = 0;
// 	printf("String: %s.\n\n", str);
// 	ptr = ft_split(str, ' ');
// 	while (ptr[i] != NULL)
// 	{
// 		printf("Substring index %i is: %s.\n", i, ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// 	return (0);
// }
