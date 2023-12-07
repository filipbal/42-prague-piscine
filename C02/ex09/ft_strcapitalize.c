/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:40:10 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:24:34 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	ft_chartype(char c);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/
char	ft_chartype(char c)
{
	if (c >= '0' && c <= '9')
		return ('N');
	else if (c >= 'A' && c <= 'Z')
		return ('U');
	else if (c >= 'a' && c <= 'z')
		return ('L');
	else
		return ('0');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (first && ft_chartype(str[i]) == 'L')
		{
			str[i] = str[i] - 32;
			first = 0;
		}
		else if (ft_chartype(str[i]) == 'N')
		{
			first = 0;
		}
		else if (ft_chartype(str[i]) == '0')
		{
			first = 1;
		}
		i++;
	}
	return (str);
}
