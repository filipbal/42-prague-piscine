/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:11:38 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/06 19:14:14 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	issep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	countstrs(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (issep(str[i], charset))
		{
			while (str[i] && issep(str[i], charset))
				i++;
		}
		else
		{
			count++;
			while (str[i] && !issep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*copystr(int n, char *str, char *charset)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	i = 0;
	while (str[len + n] && !issep(str[len + n], charset))
		len++;
	res = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		res[i] = str[n + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**strs;

	strs = malloc((countstrs(str, charset) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (issep(str[i], charset))
			i++;
		if (str[i])
			strs[j++] = copystr(i, str, charset);
		while (!(issep(str[i], charset)) && str[i])
			i++;
	}
	strs[j] = 0;
	return (strs);
}

// int main(int argc, char *argv[])
// {
// 	int	i;
// 	char	**s;
// 	s = ft_split(argv[1], argv[2]);
// 	i = 0;
// 	while (s[i])
// 		printf("%s\n", s[i++]);
// 	(void)argc;
// 	return (0);
// }
