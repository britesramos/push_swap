/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 14:37:42 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/23 14:45:17 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	void	*ptr;

	i = 0;
	ptr = NULL;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb < 0 || size < 0)
		return (NULL);
	if ((nmemb * size) / size != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

// int	main(void)
// {
// 	// int n;
//     // unsigned long i;
//     // int *ptr1;
// 	// n = 5;
//     // i = 0;
// 	// printf("Number of elements is: %d.\n", n);
// 	// ptr1 = (int*)calloc(n, sizeof(int));
// 	// if(ptr1 == NULL)
// 	// {
// 	// 	printf("Error! memory not allocated.\n");
// 	// 	return(0);
// 	// }
//     // if(ptr1)
//     // {
//     //     printf("Memory correctly allocated.");
//     // }
//     // while (i < n * sizeof(int))
// 	// 	{
// 	// 		printf("This is ptr1: %d.\n", ((char *)ptr1)[i]);
// 	// 		i++;
// 	// 	}
// 	// free(ptr1);
// 	int n;
// 	unsigned long i;
// 	int *ptr1;

// 	n = 5;
// 	i = 0;
// 	printf("Number of elements is: %d.\n", n);
// 	ptr1 = (int*)ft_calloc(n, sizeof(int));
// 	if(ptr1 == NULL)
// 	{
// 		printf("Error! memory not allocated.\n");
// 		return(0);
// 	}
// 	if(ptr1)
// 	{
// 		printf("Memory correctly allocated.\n");
// 		while (i < n * sizeof(int))
// 		{
// 			printf("This is ptr1: %d.\n", ((char *)ptr1)[i]);
// 			i++;
// 		}
// 	free(ptr1);
//     }
// 	return (0);
// }
