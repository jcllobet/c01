/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <jcarbone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:56:37 by jcarbone          #+#    #+#             */
/*   Updated: 2021/07/01 20:18:27 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	switch_vars(int *tab, int x, int is_changed)
{
	int	temp1;
	int	temp2;

	temp1 = tab[x];
	temp2 = tab[x + 1];
	tab[x] = temp2;
	tab[x + 1] = temp1;
	is_changed = 1;
	return (is_changed);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	is_sorted;
	int	is_changed;

	is_sorted = 0;
	while (is_sorted == 0)
	{
		i = 0;
		is_changed = 0;
		while (i < size - 1 && is_sorted == 0)
		{
			if (tab[i] > tab[i + 1])
			{
				is_changed = switch_vars(tab, i, is_changed);
			}
			i++;
		}
		if (is_changed == 0)
		{
			is_sorted = 1;
		}
	}
}

int	main(void)
{
	int	size;
	int	array[6] = {200, 42, 20, 1, 33, 54};
	int	loop;

	size = 6;
	ft_sort_int_tab(array, size);
	for(loop = 0; loop < size; loop++)
		printf("%d ", array[loop]);
}
