/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:12:31 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:37 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	c;
	char	s1[100];
	char	s2[100];

	printf("ft_strcmp() returns an integer");
	printf(" indicating the result of the comparison, as follows:\n");
	printf(" - 0, if the s1 and s2 are equal;\n");
	printf(" - a negative value if s1 is less than s2;\n");
	printf(" - a positive value if s1 is greater than s2.\n");
	printf("Continue? [y/n] \n");
	scanf("%c", &c);
	if (c == 'y')
	{
		printf("Enter string 1: \n");
		scanf("%s", s1);
		printf("Enter string 2: \n");
		scanf("%s", s2);
		printf("Result:\n%i\n", ft_strcmp(s1, s2));
		return (0);
	}
	else
		return (1);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
