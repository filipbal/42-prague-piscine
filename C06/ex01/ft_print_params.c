/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:35:44 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:51 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str);

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (++i < argc)
		ft_print_params(argv[i]);
	return (0);
}

void	ft_print_params(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}
