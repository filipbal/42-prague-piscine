/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:31:54 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:59 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	// Init string and substring
	char haystack[100] = "Balakovski";
	char needle[100] = "kvski";

	// Print function description
	printf("\nstrstr() finds first occurrence of a substring in a string\n");
	printf(" - terminating null bytes are not compared\n");
	printf(" - returns pointer to beginning of located substring");
	printf(" or NULL if substring not found\n");

	printf("\nHaystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Result: %s\n", ft_strstr(haystack, needle));

	return (0);
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && to_find[j] == str[i + j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
