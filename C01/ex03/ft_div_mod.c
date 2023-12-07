/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:27:52 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:10 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int div = 0;
	int mod = 0;

	printf("a: ");
	scanf("%i", &a);
	printf("b: ");
	scanf("%i", &b);
	
	ft_div_mod(a, b, &div, &mod);
	
	printf("%i divided by %i is: %i\nwith a remainder of: %i\n", a,b,div,mod);
	
	return(0);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
