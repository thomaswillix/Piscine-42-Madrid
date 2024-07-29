/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfreitas <tfreitas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:58:44 by tfreitas          #+#    #+#             */
/*   Updated: 2024/07/14 18:11:48 by tfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_result(char **arr);

bool	validate_corners(char **arr);

bool	validate_pair(char **arr);

bool	validate_args(char **args)
{
	int	i;

	i = 1;
	while (i < 18)
	{
		if (argv[i] < '0' || argv[i] > '4')
			return (0);
		i++;
	}
}

void	fill_array(char **arr)
{
	int	i;

	i = 1;
	while (i < 18)
	{
		if (i < 5)
			arr[0][i] = argv[i];
		else if (i < 9)
			arr[5][i - 4] = argv[i];
		else if (i < 13)
			arr[i - 8][0] = argv[i];
		else if (i < 17)
			arr[i - 12][5] = argv[i];
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	arr[6][6];
	bool	is_valid;

	if (argc != 17)
	{
		write(1, "Error", 5);
		return (0);
	}
	if (!validate_args(argv[0]))
	{
		write(1, "Error", 5);
		return (0);
	}
	fill_array(arr);
	if (validate_corners(arr))
		if (validate_pairs)
			show_result(arr);
	else
		write(1, "Error", 5);
	return (0);
}
