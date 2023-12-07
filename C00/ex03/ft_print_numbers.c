/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:04:03 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:52 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Test main function
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
}
*/
void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c <= 57)
	{
		write(1, &c, 1);
		c++;
	}
}
