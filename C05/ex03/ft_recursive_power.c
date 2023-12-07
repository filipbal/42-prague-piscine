/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:27:38 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:34 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%i", ft_recursive_power(2, 3));
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
