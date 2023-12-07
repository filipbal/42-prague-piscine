/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:06:36 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:17 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[10];
	char src[] = "Bali";

	dest[0] = '\0';

	printf("Before:\n");
	printf("dest: %s  src: %s \n", dest, src);

	ft_strcpy(dest, src);

	printf("After:\n");
	printf("dest: %s  src: %s \n", dest, src);
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
