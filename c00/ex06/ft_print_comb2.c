/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:24:47 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/10 17:21:45 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	increment(char *n1, char *n2, char *n3, char *n4)
{
	if (*n3 == '9' && *n4 == '9')
	{
		*n3 = '0';
		if (*n2 == '8')
		{
			(*n1)++;
			*n2 = '0';
		}
		else
			(*n2)++;
		*n4 = *n2 + 1;
	}
	else if (*n4 == '9')
	{
		(*n3)++;
		*n4 = '0';
	}
	else
	{
		(*n4)++;
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '1';
	while (n1 <= '9' && n3 <= '9')
	{
		write (1, &n1, 1);
		write (1, &n2, 1);
		write (1, " ", 1);
		write (1, &n3, 1);
		write (1, &n4, 1);
		if (!(n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9'))
		{
			write (1, ", ", 2);
			increment(&n1, &n2, &n3, &n4);
		}
		else
			n1++;
	}
}
/*
int main (void)
{
	ft_print_comb2();
}*/
