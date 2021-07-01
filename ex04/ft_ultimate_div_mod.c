/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <jcarbone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:54:29 by jcarbone          #+#    #+#             */
/*   Updated: 2021/07/01 16:16:19 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}

int		main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 17;

	printf("el valor de a es %d, el valor de b es %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a/b: el resultado de la división es: %d  y el resto: %d \n", a, b);
}
