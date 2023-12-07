/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:24:08 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:22 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char str[] = "Bali7";
	
	printf("%s\n", str);
	printf("%i\n", ft_str_is_alpha(str));
	
	return (0);
}
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
