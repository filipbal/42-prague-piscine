/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:10:30 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:20 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[10];
	char src[] = "Baliandr";
	unsigned int n = 4;

	dest[0] = '\0';

	printf("Before:\n");
	printf("dest: %s  src: %s \n", dest, src);

	ft_strncpy(dest, src, n);

	printf("After:\n");
	printf("dest: %s  src: %s \n", dest, src);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
