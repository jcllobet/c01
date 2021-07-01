/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <jcarbone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:35:05 by jcarbone          #+#    #+#             */
/*   Updated: 2021/07/01 17:45:26 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	sum;

	sum = 0;
	while (*str != '\0')
	{
		sum++;
		str++;
	}
	return (sum);
}

int	main(void)
{
	int	a;
	char	str[] = "Hello, world!";
	a = ft_strlen(str);
	printf("%d", a);
}
