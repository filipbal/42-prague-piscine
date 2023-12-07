/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:13:29 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:20:51 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Test main function for user input using scanf
#include <stdio.h>

void ft_is_negative(int n);

int main(void)
{
    int n;
    scanf("%i", &n);
    ft_is_negative(n);
}
*/
void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
