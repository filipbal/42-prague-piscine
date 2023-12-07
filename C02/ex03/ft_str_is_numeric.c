/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:53 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:25 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str[] = "";
	
	printf("%s\n", str);
	printf("%i\n", ft_str_is_numeric(str));
	
	return (0);
}
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
