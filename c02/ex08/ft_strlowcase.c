/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:02:12 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/12 12:05:46 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (&str[0]);
}
/*
#include <stdio.h>

int     main(void)
{
        char numeric[] = "123454566";
        char mix[] = "abcdESFSD";
        char upper[] = "ASASDFE";
        char empty[] = "";
        
        printf("Numeric: %s \n", ft_strlowcase(numeric));

        printf("Mix: %s \n", ft_strlowcase(mix));

        printf("Upper: %s \n", ft_strlowcase(upper));

        printf("Empty: %s \n", ft_strlowcase(empty));

        return (0);
}*/
