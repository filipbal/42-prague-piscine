/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:54:19 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:39 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	int size  = 5;
	
    // Print the original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", tab[i]);
    }
    
    printf("\n");
    
    // Call for reverse array
    ft_rev_int_tab(tab, size);

    // Print the reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", tab[i]);
    }

	printf("\n");

    return 0;
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		temp;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[ri];
		tab[ri] = temp;
		i++;
		ri--;
	}
}
