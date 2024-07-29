/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:48:38 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/10 15:44:27 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	cont;
	int	flag;

	size -= 1;
	if (size % 2 == 0)
		flag = size / 2;
	else
		flag = size / 2 + 1;
	cont = 0;
	while (cont < flag)
	{
		aux = tab[cont];
		tab[cont] = tab[size];
		tab[size] = aux;
		cont++;
		size --;
	}
}

/*int main (void)
{
	int arrayimpar[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   	int arraypar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int loop;

   	for(loop = 0; loop < 11; loop++)
      		printf("%d ", arrayimpar[loop]);
	
	ft_rev_int_tab(&arrayimpar[0], 11);
	
	printf("\n\n");
	for(loop = 0; loop < 11; loop++)
                printf("%d ", arrayimpar[loop]);
	
	printf("PAR: \n\n");

	for(loop = 0; loop < 10; loop++)
                printf("%d ", arraypar[loop]);

        ft_rev_int_tab(&arraypar[0], 10);

        printf("\n\n");
        for(loop = 0; loop < 10; loop++)
                printf("%d ", arraypar[loop]);

   	return 0;
}*/
