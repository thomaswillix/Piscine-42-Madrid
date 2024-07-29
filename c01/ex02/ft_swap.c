/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:22:29 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/10 12:00:37 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int main (void)
{
	int	c;
	int	d;

	c = 2;
	d = 4;
	printf("Num 1 : %i, Num 2: %i", c, d);
	ft_swap(&c, &d);
	printf("Num 1 : %i, Num 2: %i", c, d);
	return 0;
}*/
