/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:50:15 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:29 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
}
*/
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i > 1)
		{
			nb = nb * (i - 1);
			i--;
		}
		return (nb);
	}
}
