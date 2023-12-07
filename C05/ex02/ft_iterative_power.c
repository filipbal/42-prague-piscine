/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:07:03 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:32 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%i", ft_iterative_power(2, 3));
}
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	i = 1;
	res = nb;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
