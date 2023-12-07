/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:02:37 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:44 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Test main function for user input
#include <stdio.h>

void ft_putchar(char c);

int main(void)
{
    char c;
    scanf("%c", &c);
    ft_putchar(c);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
