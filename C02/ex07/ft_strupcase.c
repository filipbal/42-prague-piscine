/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:23:59 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:31 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str[] = "michaela";
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);	
}
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
