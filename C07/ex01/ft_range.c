/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:32:25 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:28:09 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int		get_int(char *str);
int		*ft_range(int min, int max);

int	main(void)
{
	int		*array;
	int		min;
	int		max;
	int		i;

	min = get_int("Enter minimum: ");
	max = get_int("Enter maximum: ");
	
	array = ft_range(min, max);
	if (array != NULL)
    {
		i = 0;
		while (i < (max - min))
		{
			printf("%i", array[i]);
			if (i < (max - min - 1))
				printf(", ");
			i++;
		}
		printf("\n");
        free(array);
    }

}

int		get_int(char *str)
{
	int		minmax;
	
	printf("%s", str);
	scanf("%i", &minmax);

	return minmax;
}
*/
int	*ft_range(int min, int max)
{
	int		*array;
	int		n;
	int		i;

	if (min >= max)
		return (NULL);
	n = max - min;
	array = malloc(n * sizeof(int));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
