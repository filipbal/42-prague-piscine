/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:32:08 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:14 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	// Initialize an unsorted array of integers
	int tab[] = {4, 1, 0, 3, 2};
	int size = 5;
	int i;
	
	// Loop through original array of ints to print out the numbers
	i = 0;
	while (i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}

	// Print newline character
	printf("\n");

	// Call the sorting algorithm
	ft_sort_int_tab(tab, size);
	
	// Loop through the sorted array again and print out numbers
	i = 0;
	while (i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}

	// Newline char
	printf("\n");
}
*/

// Selection sort algorithm
/*
void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;

    while (i < size - 1)
    {
        int min_index = i;
        int j = i + 1;

        while (j < size)
        {
            if (tab[j] < tab[min_index])
            {
                min_index = j;
            }
            j++;
        }

        // Swap the found minimum element with the first element
        int tmp = tab[min_index];
        tab[min_index] = tab[i];
        tab[i] = tmp;

        i++;
    }
}
*/

// Bubble sort algorithm
void	ft_sort_int_tab(int *tab, int size)
{
	int	sorted;
	int	i;
	int	tmp;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (!(tab[i] < tab[i + 1]))
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
	}
}
