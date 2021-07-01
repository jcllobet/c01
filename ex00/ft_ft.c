/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <jcarbone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:02:34 by jcarbone          #+#    #+#             */
/*   Updated: 2021/07/01 11:31:57 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main (void)
{
	int *p_nbr;
	int nbr;

	nbr = 21;
	p_nbr = &nbr;

	ft_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}

