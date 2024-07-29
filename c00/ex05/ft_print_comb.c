/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:26:31 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/09 19:35:23 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	increment(char *n1, char *n2, char *n3)
{
	if (*n3 == '9')
	{
		(*n2)++;
		*n3 = *n2 + 1;
	}
	else
	{
		(*n3)++;
	}
	if (*n2 == '9')
	{
		(*n1)++;
		*n2 = *n1 + 1;
		*n3 = *n2 + 1;
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '7' && n2 <= '8' && n3 <= '9')
	{
		write (1, &n1, 1);
		write (1, &n2, 1);
		write (1, &n3, 1);
		if (!(n1 == '7' && n2 == '8' && n3 == '9'))
		{
			write (1, ", ", 2);
		}
		increment (&n1, &n2, &n3);
	}
}
/*
int main(void)
{
	ft_print_comb();
}*/
