/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:28:16 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/11 19:03:02 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
        char lower[] = "AAAAA";
        char mix[] = "asdaAASD111";
        char empty[] = "";

        int value;
        
        value = ft_str_is_uppercase(lower);
        printf("upper: %i \n", value);
        value = ft_str_is_uppercase(mix);
        printf("mix: %i \n", value);
        value = ft_str_is_uppercase(empty);
        printf("empty: %i \n", value);
}*/
