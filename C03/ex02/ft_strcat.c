/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:53:22 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:46 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	c;
	char	dest[100];
	char	src[100];

	printf("\nThe ft_strcat() appends the src string to the dest string,\n");
	printf("overwriting the terminating null byte at the end of dest,\n");
	printf("and then adds a terminating null byte.\n");
	printf("\nContinue? [y/n] \n");
	scanf("%c", &c);
	if (c == 'y')
	{
		printf("Enter destination string: \n");
		scanf("%s", dest);
		printf("Enter source string: \n");
		scanf("%s", src);
		printf("Result:\n%s\n", ft_strcat(dest, src));
		return (0);
	}
	else
		return (1);
}
*/
/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: ./ft_strcat dest src\n");
		return (1);
	}
	printf("Result:\n%s\n", ft_strcat(argv[1], argv[2]));
	return (0);
}
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
