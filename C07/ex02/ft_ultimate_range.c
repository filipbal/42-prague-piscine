/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:26:48 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:28:20 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int		get_int(char *str);
int		ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int		min;
	int		max;
	int		*result;
	int		size;
	int		i;

	min = get_int("Enter minimum: ");
	max = get_int("Enter maximum: ");

	size = ft_ultimate_range(&result, min, max);
	if (size != -1)
	{
	
		printf("Size: %i\nArray: ", size);
		i = 0;
		while (i < size)
        {
            printf("%i ", result[i]);
			i++;
		}
		printf("\n");
        free(result);
	}
	return (0);
}

int		get_int(char *str)
{
	int		minmax;
	
	printf("%s", str);
	scanf("%i", &minmax);

	return minmax;
}
*/
int	ft_ultimate_range(int **range, int min, int max)
{
	int		n;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	n = max - min;
	*range = malloc(n * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (n);
}
