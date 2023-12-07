/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:50:33 by fbalakov          #+#    #+#             */
/*   Updated: 2023/11/21 17:56:20 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_strswap(char *a, char *b);
char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	int i;
	int swapped;
	int n = 5; // Number of strings in array
	
	char *strings[] = {"Filip", "Dylan", "Oyko", "Oliver", "Daniel"};
	
	printf("\nUnsorted strings:\n");
	
	i = 0;
	while (i < n)
	{
		printf("%s\n", strings[i]);
		i++;
	}
	
   	// CALL STRING COMPARE TO SORT THE ARRAY
    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        i = 0; // Reset i for each iteration
        while (i < n - 1)
        {
            int result = ft_strcmp(strings[i], strings[i + 1]);

            // if s1 > s2
            if (result > 0)
            {
                // CALL STRING SWAP
                ft_strswap(strings[i], strings[i + 1]); // Pass pointers to pointers
                swapped = 1;
            }
            i++;
        }
    }
	
	printf("\nSorted strings:\n");
	
	i = 0;
	while (i < n)
	{
		printf("%s\n", strings[i]);
		i++;
	}

	return (0);
}


// STRING COMPARE FUNCTION
int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}

	return (unsigned char)s1[i] - (unsigned char)s2[i];
}

// STRING SWAP FUNCTION
void	ft_strswap(char *a, char *b)
{
	char temp[100];

	ft_strcpy(temp, a);
	ft_strcpy(a, b);
	ft_strcpy(b, temp);

}

//  STRING COPY FUNCTION
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

