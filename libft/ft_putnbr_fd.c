/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 17:08:00 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/23 10:29:51 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	if (n > 9 && n != -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + '0';
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int	n;

// 	n = -2147483648;
// 	ft_putnbr_fd(n, 1);
// 	return (0);
// }
