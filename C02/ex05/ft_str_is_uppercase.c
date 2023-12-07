/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:10:10 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:27 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char str[] = "";
	
	printf("%s\n", str);
	printf("%i\n", ft_str_is_uppercase(str));
	
	return (0);
}
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
