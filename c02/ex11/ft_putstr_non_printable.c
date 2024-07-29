/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:29:47 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/15 17:48:56 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr_non_printable(char *str);

void	ft_hexconver(char c)
{
	char	aux;

	c = c >> 4 & 0;
	printf("\n%c  ", c);
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_hexconver(str[i]);
		}
		i++;
	}
}
/*
int main(void)
{
	char arr[] = "Coucou\ntu vas bien ?";
	printf("Arr> %s\n\n", arr);
	ft_putstr_non_printable(arr);
}*/
