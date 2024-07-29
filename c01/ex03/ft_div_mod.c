/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:23 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/10 12:01:01 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &c, &d);
	printf("Num 1: %i, Num 2: %i, Resultado: %i, Resto: %i", a, b, c, d);
}*/
