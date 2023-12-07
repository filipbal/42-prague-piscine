/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:15:16 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:28 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char str[] = "";
	
	printf("%s\n", str);
	printf("%i\n", ft_str_is_printable(str));
	
	return (0);
}
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
