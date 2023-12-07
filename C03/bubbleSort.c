/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubbleSort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbalakov <fbalakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:43:07 by fbalakov          #+#    #+#             */
/*   Updated: 2023/11/21 14:43:47 by fbalakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n);
void swap(char *a, char *b);

int main(void)
{
    char strings[5][100]; // Adjust the size as needed
    int n = 5; // Number of strings in the array

    // Input strings
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf("%99s", strings[i]); // Limit input to 99 characters to leave space for the null terminator
    }

    // Sort strings
    bubbleSort(strings, n);

    // Output sorted strings
    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

void bubbleSort(char arr[][100], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void swap(char *a, char *b)
{
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}
