/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:39:39 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/10 14:22:59 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}

/*int main (void)
{
        int arrayimpar[11] = {12, 4, 23, 5, 7, 10, 4, 6, 11, 9, 0};
        
        int loop;

        for(loop = 0; loop < 11; loop++)
                printf("%d ", arrayimpar[loop]);

        ft_sort_int_tab(&arrayimpar[0], 11);

        printf("\n\n");
        for(loop = 0; loop < 11; loop++)
               printf("%d ", arrayimpar[loop]);
}*/
