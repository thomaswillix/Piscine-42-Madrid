/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:06:30 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/09 19:49:35 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	x;

	if (nb == -2147483648)
		write(1, "2147483648", 10);
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
int	main(void)
{
	ft_putnbr(2);
	write(1, "\n", 1);
	ft_putnbr(-4);
	write(1, "\n", 1);
	ft_putnbr(222);
	write(1, "\n", 1);
	ft_putnbr(2147483648);
	write(1, "\n", 1);
	ft_putnbr(-2147483647);
}*/
