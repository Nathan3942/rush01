/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:46:43 by njeanbou          #+#    #+#             */
/*   Updated: 2024/03/05 16:54:53 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_tab(int **tab)
{
	int	i;
	int	z;

	i = 0;
	while (i < 4)
	{
		z = 0;
		while (z < 4)
		{
			printf("%d ", tab[i][z]);
			z++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}

int	check_col(int **tab, int *para)
{
	

}

int	check_2(int *tab)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (i < 4)
	{
		
	}
}

int	check_3(int *tab)
{

}
