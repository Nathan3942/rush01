/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:06:05 by njeanbou          #+#    #+#             */
/*   Updated: 2024/03/05 16:38:17 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	init_all(int **tab, char **argv, int **para)
{
	int	i;
	int	z;

	z = 0;
	i = 0;
	while (i < 4)
	{
		tab[i] = (int *)calloc (4, sizeof(int));
		i++;
	}
	i = 0;
	while (i < 16)
	{
		(*para)[i] = argv[1][z] - '0';
		z = z + 2;
		// printf("%d ", para[i]);
		i++;
	}
	return ;
}

void	set_1(int **tab, int *para)
{
	int	i;
	int	z;
	int	col;

	z = 0;
	i = 0;
	col = 0;
	while (i < 16)
	{
		if (para[i] == 1)
		{
			if (z == 0)
				tab[0][col] = 4;
			else if (z == 1)
				tab[3][col] = 4;
			else if (z == 2)
				tab[col][0] = 4;
			else if (z == 3)
				tab[col][3] = 4;
		}
		i++;
		if (i % 4 == 0)
		{
			z++;
			col = 0;
		}
		else
			col++;
	}
}

void	set_4(int **tab, int *para)
{
	int	i;
	int	z;
	int	col;

	z = 0;
	i = 0;
	col = 0;
	while (i < 16)
	{
		if (para[i] == 4)
		{
			if (z == 0)
			{
				tab[0][col] = 1;
				tab[0][col + 1] = 2;
				tab[0][col + 2] = 3;
				tab[0][col + 3] = 4;
			}
			else if (z == 1)
			{
				tab[3][col] = 1;
				tab[3][col + 1] = 2;
				tab[3][col + 2] = 3;
				tab[3][col + 3] = 4;
			}
			else if (z == 2)
			{
				tab[col][0] = 1;
				tab[col + 1][0] = 2;
				tab[col + 2][0] = 3;
				tab[col + 3][0] = 4;
			}
			else if (z == 3)
			{
				tab[col][3] = 1;
				tab[col + 1][3] = 2;
				tab[col + 2][3] = 3;
				tab[col + 3][3] = 4;
			}
		}
		i++;
		if (i % 4 == 0)
		{
			z++;
			col = 0;
		}
		else
			col++;
	}
}

int	main(int argc, char **argv)
{
	int	**tab;
	int	*para;

	tab = (int **)malloc (4 * sizeof(int *));
	para = (int *)malloc (16 * sizeof(int));
	if (argc != 2)
		return (1);
	init_all(tab, argv, &para);
	for (int i = 0; i < 16; i++)
		printf("%d", para[i]);
	printf("\n");
	set_1(tab, para);
	set_4(tab, para);
	print_tab(tab);
	return (0);
}
