/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:38:05 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:33 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[] = "FILIP";
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);	
}
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
