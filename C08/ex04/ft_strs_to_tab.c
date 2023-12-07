/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:49:36 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:31:33 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <unistd.h>
#include "ft_stock_str.h"

// void	ft_show_tab(struct s_stock_str *par);
// void	ft_putstr(char *str);
// void	ft_putchar(char c);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
int					ft_strlen(char *str);
char				*ft_strcpy(char *dest, char *src);

/*
int	main(int ac, char **av)
{
	struct s_stock_str *arr = ft_strs_to_tab(ac, av);
	ft_show_tab(arr);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 1;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putchar(par[i].size + '0');
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*arr;
	int				i;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = malloc(arr[i].size + 1);
		if (arr[i].copy == NULL)
		{
			while (--i >= 0)
				free(arr[i].copy);
			free(arr);
			return (NULL);
		}
		ft_strcpy(arr[i].copy, av[i]);
		i++;
	}
	arr[i] = (t_stock_str){.size = 0, .str = 0, .copy = 0};
	return (arr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
