/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:53:12 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:54 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_params(int argc, char *argv[]);
void	ft_print_args(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);

int	main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	ft_print_args(argc, argv);
	return (0);
}

// Bubble sort algorithm for strings
void	ft_sort_params(int argc, char *argv[])
{
	int		sorted;
	int		i;
	char	tmp[100];

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 1;
		while (i < argc - 1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
			{
				ft_strcpy(tmp, argv[i]);
				ft_strcpy(argv[i], argv[i + 1]);
				ft_strcpy(argv[i + 1], tmp);
				sorted = 0;
			}
			i++;
		}
	}
}

// Compare ascii value of two strings
int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// Copy string from source to destination array
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_print_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &(argv[i][j]), 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
