/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:51:21 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/21 17:18:41 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	x;

	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write(1, "2147483648", 11);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		if (nb >= 10)
			ft_putnbr(nb / 10);
		x = (nb % 10) + '0';
		write(1, &x, 1);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr (nb / 10);
		x = (nb % 10) + '0';
		write(1, &x, 1);
	}
}
/*
int main(void)
{
	int n = -2147483648;
	ft_putnbr(n);
	return (0);
}*/
