/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:01 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:44 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	is_prime(int n);
// int	ft_find_next_prime(int nb);

// int	main(void)
// {
// 	printf("%i", ft_find_next_prime(908));
// }

int	is_prime(int n)
{
	int	i;

	if (n == 1)
		return (0);
	i = 2;
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!is_prime(nb))
		++nb;
	return (nb);
}
