/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:23:33 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/15 19:04:33 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
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
        char lower[] = "asdffasfasd";
        char empty[] = "";
        
        printf("Numeric: %s \n", ft_strupcase(numeric));

        printf("Mix: %s \n", ft_strupcase(mix));

        printf("Lower: %s \n", ft_strupcase(lower));

        printf("Empty: %s \n", ft_strupcase(empty));

	return (0);
}*/
