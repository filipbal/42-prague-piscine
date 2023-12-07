/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:58:48 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:23:54 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ASCII alphabet in reverse goes from decimal 122 to 97 */

#include <unistd.h>
/* Test main function
void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 122;
	while (c >= 97)
	{
		write(1, &c, 1);
		c--;
	}
}
