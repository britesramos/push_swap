/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   arg_checker.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/11 15:55:55 by sramos        #+#    #+#                 */
/*   Updated: 2024/05/02 17:55:13 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Checks if it has other characters than - + or digits.
//And if there are multiple -- or ++.
int	ft_arg_valid(char **parsed)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (parsed[i] != NULL)
	{
		if (parsed[i][0] == '-' && parsed[i][1] == '\0')
			return (1);
		if (parsed[i][0] == '+' && parsed[i][1] == '\0')
			return (1);
		if (parsed[i][0] == '-' || parsed[i][0] == '+')
			j++;
		while (parsed[i][j] != '\0')
		{
			if (!ft_isdigit(parsed[i][j]))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

//Convert strings into longs.
long	ft_atol(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		return (res * sign);
	}
	return (0);
}

//Check if it is a valid int.
int	ft_check_int(char **parsed)
{
	int		i;
	long	newparsed;

	i = 0;
	while (parsed[i] != NULL)
	{
		newparsed = ft_atol(parsed[i]);
		if (newparsed > INT_MAX || newparsed < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

//Checks duplicates.
int	ft_check_duplicates(char **parsed)
{
	int	i;
	int	j;
	int	temp1;
	int	temp2;

	i = 0;
	j = 1;
	temp1 = 0;
	temp2 = 0;
	while (parsed[i] != NULL)
	{
		while (parsed[j] != NULL)
		{
			temp1 = ft_atoi(parsed[i]);
			temp2 = ft_atoi(parsed[j]);
			if (temp1 == temp2)
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	arg_checker(char **parsed)
{
	//Missing a function to deal with empty strings and strings with only spaces.
	if (ft_arg_valid(parsed) == 1)
		return (1);
	else if (ft_check_int(parsed) == 1)
		return (1);
	else if (ft_check_duplicates(parsed) == 1)
		return (1);
	return (0);
}
