/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:24:30 by fbalakov          #+#    #+#             */
/*   Updated: 2023/12/07 15:25:07 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);

int	main(void)
{
	// Init dest and src strings
	char dest[] = "Balak";
	char src[] = "ovski";

	// Get len of strings
	unsigned int dlen = ft_strlen(dest);
	unsigned int slen = ft_strlen(src);
	
	// Calculate needed size of the destination buffer
	unsigned int needed;
	// Space for both strings + 1 BYTE for the '\0'
	needed = ft_strlen(dest) + ft_strlen(src) + 1;
	
	// Try to overload the actual buffer
	unsigned int size;
	size = 4;

	// Print starting values
	printf("\nstrlen(%s): %i\n", dest, dlen);
	printf("strlen(%s): %i\n", src, slen);
	printf("NUL size: 1\n");
	printf("You need %i bytes\n", needed);
	printf("Actual buffer size: %i\n\n", size);

	// Call strlcat()
	unsigned int res;
	// Src string gets appended to dest in as many space as available
	res = ft_strlcat(dest, src, size);
		
	// Strlcat returns a len of original dest+src
	// IF the wanted string is longer than available space, truncation occured
	if (res >= size)
		printf("Result: %s (%i)\nString truncated. No overflow.\n", dest, res);
	else
		printf("Result: %s (%i)\nConcatenated. No truncation.\n", dest, res);
		
	return (0);
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
*/

// DESCRIPTION
// The strlcat() function concatenate strings more safely than strncat().
// strlcat() take the full size of the buffer (not just the length)
// and guarantee to NUL-terminate the result
// (as long as size is larger than 0 or, in the case of strlcat(), 
// as long as there is at least one byte free in dst).
// Note that a byte for the NUL should be included in size.
// Also note that strlcat() only operate on true “C” strings. 
// This means that for strlcat() both src and dst must be NUL-terminated.

// strlcat() function appends NUL-terminated string src to the end of dst.
// It will append at most size-strlen(dst)-1 bytes, NUL-terminating result.

// RETURN VALUES
// strlcat() function return total length of the string it tried to create.
// That means the initial length of dst plus the length of src. 
// While this may seem confusing, it makes truncation detection simple.

// Note, that if strlcat() traverses size characters without finding a NUL,
// the length of the string is considered to be size
// and the destination string will not be NUL-terminated
// (since there was no space for the NUL).
// This keeps strlcat() from running off the end of a string.
// In practice this should not happen (it means that size is incorrect
// or that dst is not a proper “C” string).
// The check exist to prevent potential security problem of incorrect code.

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = dlen;
	j = 0;
	if (size == 0 || size <= dlen)
		return (size + slen);
	while (j < (size - dlen - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = ('\0');
	return (dlen + slen);
}
