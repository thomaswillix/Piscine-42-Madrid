/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:07:18 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/16 18:29:54 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i - 1] < 'A' || str[i - 1] > 'Z') && !(str[i - 1] >= '0'
					&& str[i - 1] <= '9')) && (str[i - 1] < 'a' || str[i] > 'z')
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int     main(void)
{
        char numeric[] = "123454566";
        char mix[] = "abcdESFSD";
        char example[] = "salut, comment tu vas ? 42mots quarante-deux
	cinquante+et+un";
	char example1[] = "CINqurnat.asa..a salut, comment tu vas ? 
	42motsquarante-deux;cinquante+et+un";
	//char empty[] = "";
        
        printf("Numeric: %s \n", ft_strcapitalize(numeric));

        printf("Mix: %s \n", ft_strcapitalize(mix));

        printf("Upper: %s \n", ft_strcapitalize(example));

        printf("Empty: %s \n", ft_strcapitalize(example1));

        return (0);
}*/
