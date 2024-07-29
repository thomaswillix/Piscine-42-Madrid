/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:50:39 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/24 13:49:06 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	s1_val;
	unsigned char	s2_val;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			s1_val = (unsigned) s1[i];
			s2_val = (unsigned) s2[i];
			return (s1_val - s2_val);
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
        char s1[] = ";";
        char s2[] = "";
	unsigned int i = 4;
        unsigned int r = ft_strncmp(s1, s2, i);
	unsigned int s = strncmp(s1, s2, i);

        printf("Resultado: %d\n", r);
	printf("Resultado: %d\n", s);
}*/
