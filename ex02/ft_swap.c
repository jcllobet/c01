/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <jcarbone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:28:44 by jcarbone          #+#    #+#             */
/*   Updated: 2021/07/01 15:47:54 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	 temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 13;
	printf("a--> address %p, pointer: %d \n", &a, a);
	printf("b--> address %p, pointer: %d \n", &b, b);
	ft_swap(&a, &b);
	printf("a--> address %p, pointer: %d \n", &a, a);
	printf("b--> address %p, pointer: %d \n", &b, b);
}
