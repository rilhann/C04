/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:15:32 by malasaha          #+#    #+#             */
/*   Updated: 2021/11/04 16:17:52 by malasaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
