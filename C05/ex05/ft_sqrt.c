/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 09:14:14 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:39 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_sqrt(int nb);

// int	main(void)
// {
// 	printf("%i", ft_sqrt(2147395600));
// }

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		i = 2;
		while (i * i <= nb && i < 46341)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
		return (0);
	}
}
