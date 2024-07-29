/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:10:16 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/17 16:12:15 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	while (src[i])
		i++;
	while (src[i])
		j++;
	if (i + j < size)
		res = i + size;
	else
		res = i + j;
	i = 0;
	while (i < size && (src[i] || dest[i]))
	{
		dest[i] = src[i];
		i++;

	}
	dest[i] = '\0';
	return (res);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[] = "Hola";
	char arr2[] = "adios";
	unsigned int i = 8;

	printf("Arr 1: %s\n", arr);
	printf("Arr 2: %s\n", arr2);

	unsigned int r = ft_strlcpy(arr, arr2, i);
	printf("Valor final: %i\n", r);
	r = strlcpy(arr, arr2, i);
	printf("Valor final: %i\n", r); 
	
	printf("Arr 1: %s\n", arr);
        printf("Arr 2: %s\n", arr2);

}
