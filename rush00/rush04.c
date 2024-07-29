/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:00:27 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/06 12:28:57 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_cases(int *b, int *a, int *columna, int *fila)
{
	if ((*fila == 1 && *columna == 1) || (*fila == *a && *columna == *b))
	{
		ft_putchar('A');
	}
	else if ((*fila == 1 && *columna == *b) || (*fila == *a && *columna == 1))
	{
		ft_putchar('C');
	}
	else
	{
		if (*fila == 1 || *columna == 1 || *fila == *a || *columna == *b)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int b, int a)
{
	int		fila;
	int		columna;

	fila = 1;
	columna = 1;
	while (fila <= a)
	{
		while (columna <= b)
		{
			print_cases(&b, &a, &columna, &fila);
			++columna;
		}
		columna = 1;
		ft_putchar('\n');
		++fila;
	}
}
