/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:50:19 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:29:28 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_total_len(int size, char **strs, char *sep);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
/*
#include <stdio.h>

int	main(void)
{
	int		size = 3;
	char 	*strs[] = {"I", "am", "batman"};
	char	*sep = " ";
	char	*result = ft_strjoin(size, strs, sep);;
	
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return 0;
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc((ft_total_len(size, strs, sep)) + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * ft_strlen(sep);
	return (total_len);
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
