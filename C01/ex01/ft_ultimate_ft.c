/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:26:56 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:07 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	num = 0;
	int	*ptr1 = &num;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int	*********ptr9 = &ptr8;

    ft_ultimate_ft(ptr9);

	// Now, num should be 42
	printf("The value of num after calling ft_ultimate_ft: %d\n", num);

	return 0;
}
*/
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
