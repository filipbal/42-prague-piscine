/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:37:01 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:08 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{	
	int x = 1;
	int y = 2;

	int *pX = NULL;
	int *pY = NULL;

	pX = &x;
	pY = &y;

	printf("x is: %i\n", x);
	printf("y is: %i\n", y);

	ft_swap(pX, pY);

	printf("swapped x is: %i\n", x);
	printf("swapped y is: %i\n", y);	
}
*/
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
