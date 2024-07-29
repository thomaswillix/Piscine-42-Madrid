/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:14:55 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/15 19:04:04 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	char lower[] = "asddgss";
	char mix[] = "asda111";
	char empty[] = "";

	int value;
	
	value = ft_str_is_lowercase(lower);
	printf("lower: %i \n", value);
	value = ft_str_is_lowercase(mix);
        printf("mix: %i \n", value);
	value = ft_str_is_lowercase(empty);
        printf("empty: %i \n", value);
}*/
