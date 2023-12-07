/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:36:43 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:19 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	printf("a: ");
	scanf("%i", &a);
	printf("b: ");
	scanf("%i", &b);

	printf("%i divided by %i\n", a, b);
	
	ft_ultimate_div_mod(&a, &b);
	
	printf("is %i with a remainder of %i\n", a, b);
	
	return(0);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
