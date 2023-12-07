/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:46:40 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:47 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ASCII alphabet goes from decimal 97 to 122 */

#include <unistd.h>
/* Test main function
void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}
*/
void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c <= 122)
	{
		write(1, &c, 1);
		c++;
	}
}
