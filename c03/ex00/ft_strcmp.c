/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:02:57 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/18 13:21:52 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	s1_val;
	unsigned char	s2_val;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		i++;
	}
	s1_val = (unsigned) s1[i];
	s2_val = (unsigned) s2[i];
	return (s1_val - s2_val);
}
/*
int main(void)
{
	char s1[] = "ABA";
	char s2[] = "ABÑ";
	

	int r = ft_strcmp(s1, s2);
	int s = strcmp(s1, s2);
	printf("Resultado mi ft: %d\n", r);
	printf("Resultado strcmp: %d\n", s);
}*/
