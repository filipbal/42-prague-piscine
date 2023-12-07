/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:17:50 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:56 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int argc, char *argv[])
{
	// Check for proper usage
	if (argc != 4)
	{
		printf("Usage: ./ft_strncat dest src n\n");
		// EXIT 1
		return (1);
	}

	// Print function description
	printf("\nThe strncat() function is similar to strcat(), except that\n");
	printf("*  it will use at most n bytes from src; and\n");
	printf("*  src does not need to be terminated if it contains n+ bytes.\n");
	
	char	c;
	// Ask for execution
	printf("\nContinue? [y/n] \n");
	scanf("%c", &c);
	
	// Expect YES
	if (c != 'y')
	{
		// EXIT 2
		return (2);
	}
	else
	{
		// Convert argv[3] to an unsigned integer
		unsigned int n = 0;
		
		// Loop through the chars of argv[3] string
		int i = 0;
		while (argv[3][i] != '\0') {
			// Look for a digit
			if (argv[3][i] >= '0' && argv[3][i] <= '9')
			{
				// Calculate the integer value
				n = n * 10 + (argv[3][i] - '0');
				i++;
			}
			else
			// If a non-numeric char is found 
			{
				printf("%s is not a valid unsigned integer!\n", argv[3]);
				// EXIT 3
				return 3;
			}
		}
		
		// Call for strncat() and display result
		printf("Result:\n%s\n", ft_strncat(argv[1], argv[2], n));
		return (0);	
	}
}
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
