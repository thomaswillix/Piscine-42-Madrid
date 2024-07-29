/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:31:47 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/17 14:55:56 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		if (to_find[j] == str[i])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i - j + 1);
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main (void)
{
	char st1[] = "Buenastardes";
	char st2[] = "as";
	

	printf("Resultado: %s\n", ft_strstr(st1, st2));
	return (0);
}*/
