/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:51:16 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/10 12:02:09 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(int argc, char **argv)
{
	int a;
	int b;

	a = 10;
        b = 2;
        ft_ultimate_div_mod(&a, &b);
        printf("Resultado: %i, Resto: %i", a, b);
}*/
