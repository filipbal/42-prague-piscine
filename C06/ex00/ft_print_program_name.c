/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:26 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:49 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *str);

int	main(int argc, char *argv[])
{
	if (argc != 1)
	{
		return (1);
	}
	ft_print_program_name(argv[0]);
	return (0);
}

void	ft_print_program_name(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}
