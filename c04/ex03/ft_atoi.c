/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:46:17 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/24 18:58:22 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

/* CHAR - 48 TO CONVERT INT TO NUM
Counter % 2 == 1 --> negative *i*/
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\t' || str[i] == '\r' || str[i] == '\v' )
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = str[i] - 48 + (sum * 10);
		i++;
	}
	return (sum * sign);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "    897-+-+--1asdas";
	printf("Str value: %s, res: %i\n", str, ft_atoi(str));
	char str2[] = "     ----65A5";
	printf("Str value: %s, res: %i\n", str2, ft_atoi(str2));
	char str3[] = "     A---655";
	printf("Str value: %s, res: %i\n", str3, ft_atoi(str3));
	char str4[] = "42---6412";
	printf("Str value: %s, res: %i\n", str4, ft_atoi(str4));
}*/
