/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:01:59 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/24 15:41:52 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (i + j < size)
		res = i + size;
	else
		res = i + j;
	j = 0;
	while (j < size && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	unsigned int n = 12;
	char st1[] = "ASDASDASDAS";
	char st2[] = ", mundo";
	printf("St1 al principio: %s\n", st1);
	printf("Resultado ft: %d\n", ft_strlcat(st1, st2, n));
	printf("Resultado strlcat: %zu\n", strlcat(st1, st2, n));
	printf("St1 despues: %s\n", st1);
	printf("St1 despues (strlcat): %s\n", st1);
	return (0);
}*/
