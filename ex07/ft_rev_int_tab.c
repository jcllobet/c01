/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <jcarbone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:22:20 by jcarbone          #+#    #+#             */
/*   Updated: 2021/07/01 19:57:16 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp1;
	int	temp2;

	i = 0;
	while (i < size)
	{
		temp1 = tab[i];
		temp2 = tab[size - 1];
		tab[i] = temp2;
		tab[size - 1] = temp1;
		i++;
		size--;
	}
}

int	main(void)
{
	int	size;
	int	array[5] = {42, 20, 1, 33, 54};
	int	loop;

	size = 5;
	ft_rev_int_tab(array, size);
	for(loop = 0; loop < size; loop++)
		printf("%d, ", array[loop]);
}
