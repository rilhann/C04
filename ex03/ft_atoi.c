/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:19:44 by malasaha          #+#    #+#             */
/*   Updated: 2021/11/04 19:26:43 by malasaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/

int	ft_atoi(char *str)
{
	int	count;
	int	n;
	int	sum;

	n = 1;
	count = 0;
	sum = 0;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			n *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		if (str[count - 1] == ' ')
			return (0);
		sum = (str[count] - '0') + (10 * sum);
		count++;
	}
	return (sum * n);
}

/*int main(void)
{
	char str[] = " ---+--+1234ab567";

	printf("%d",ft_atoi(str));
}*/
